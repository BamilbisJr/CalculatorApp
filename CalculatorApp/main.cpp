#include <iostream>
#include <string>
#include "StorageQueue.h"
using namespace std;



int main()
{
	double firstNum, secondNum, answer;
	char op;
	string sentinel = " ";
	
	cout << "Welcome to LucyCalc, the best online calculator. Type 'exit' to leave the calculator." << endl;

	while (sentinel != "exit") {
		cout << "Equation here: ";
		char firstTyped = cin.peek();
		if (firstTyped == 'E' || firstTyped == 'e') {
			sentinel = "exit";
		}
		else {
			cin >> firstNum >> op >> secondNum;
			cin.ignore(256, '\n');
			if (op == '+')
			{
				answer = firstNum + secondNum;
			}
			else if (op == '-')
			{
				answer = firstNum - secondNum;
			}
			else if (op == '*')
			{
				answer = firstNum * secondNum;
			}
			else if (op == '/')
			{
				answer = firstNum / secondNum;
			}
			else
			{
				cout << "Not a valid operator" << endl;
			}

			cout << "The answer is: " << answer << endl;
		}
	}
	cout << "Goodbye" << endl;
	return 0;
}

