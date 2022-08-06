#include <iostream>
#include <string>
using namespace std;

bool ReadInEquation(double &first, double &second, char &op);

double InterpretEquation(double &first, double &second, char &op);

int main()
{
	double firstNum, secondNum, answer;
	char op;
	string sentinel = " ";
	
	cout << "Welcome to LucyCalc, the best online calculator. Type 'exit' to leave the calculator." << endl;

	while (sentinel != "exit") {
		if (ReadInEquation(firstNum, secondNum, op))
		{
			cout << "The answer is: " << InterpretEquation(firstNum, secondNum, op) << endl;
		}
		else {
			sentinel = "exit";
		}
	}
		
	cout << "Goodbye" << endl;
	return 0;
}

bool ReadInEquation(double &first, double &second, char &op)
{
	cout << "Equation here: ";
	char firstTyped = cin.peek();
	if (firstTyped == 'E' || firstTyped == 'e') {
		return false;
	}
	else {
		cin >> first >> op >> second;
		cin.ignore(256, '\n');
		return true;
	}
}

double InterpretEquation(double &first, double &second, char &op)
{
	int solution = -1;

	if (op == '+')
	{
		solution = first + second;
	}
	else if (op == '-')
	{
		solution = first - second;
	}
	else if (op == '*')
	{
		solution = first * second;
	}
	else if (op == '/')
	{
		solution = first / second;
	}
	else
	{
		cout << "Not a valid operator. Displayed answer has no meaning." << endl;
	}

	return solution;
}
