#pragma once
#ifndef STORAGEQUEUE_H
#define STORAGEQUEUE_H

//*************************************************************
//* Struct to represent each record in the queue and its data *
//*************************************************************
struct StoredRecord
{
	double firstNum;
	double secondNum;
	char op;
};

//**************************************************************
//* Typical queue of StoredRecord objects. Will store up to 10 *
//*   past equations and delete the oldest first once 10 is hit*
//**************************************************************
class StorageQueue
{
public:
	StorageQueue();
	~StorageQueue();
	bool IsFull();
	void Insert(const StoredRecord);
	void Delete();
	void UpdateIndex();
	void ResetIndex();
	void DisplayRecord();
private:
	int size;
	int capacity;
	int currentIndex;
	StoredRecord* s;
};

#endif