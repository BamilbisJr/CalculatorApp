#include <iostream>
#include "StorageQueue.h"
using namespace std;

int DEFAULTCAPACITY = 10;

StorageQueue::StorageQueue()
{
	capacity = DEFAULTCAPACITY;
	size = 0;
	currentIndex = -1;
	s = new StoredRecord[capacity];
}

StorageQueue::~StorageQueue()
{
	if (size != 0)
	{
		delete[] s;
		size = 0;
	}
}

bool StorageQueue::IsFull()
{
	if (size == capacity)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void StorageQueue::Insert(const StoredRecord r)
{
	for (int i = capacity - 1; i >= 0; i--)
	{
		s[i + 1] = s[i];
	}
	s[0] = r;
	size++;
}

void StorageQueue::UpdateIndex()
{
	currentIndex++;
}

void StorageQueue::ResetIndex()
{
	currentIndex = -1;
}

void StorageQueue::DisplayRecord()
{
	if (currentIndex == -1)
	{
		cout << "No equations to display yet." << endl;
	}
	else
	{
		cout << s[currentIndex].firstNum << " " << s[currentIndex].op << " " << s[currentIndex].secondNum << endl;
	}
}