// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int range;
	float a = -1, b = 0, sum = 0;

	do{
		cout << "Enter the range(enter even number).               =   ";
		cin >> range;
	} while (range % 2 != 0);

	cout << endl << "    The sum of the series" << endl << "          ";

	while (b <= range)
	{
		a = a + 2;
		b = b + 2;
		if (b <= range)
		{
			cout << a << "/" << b;
			sum = sum + a / b;
		}

		a = a + 2;
		b = b + 2;
		if (b <= range)
		{
			cout << " - " << a << "/" << b << " + ";
			sum = sum - a / b;
		}
	}

	cout << "     is   = ";
	cout << sum;

	return 0;
}

