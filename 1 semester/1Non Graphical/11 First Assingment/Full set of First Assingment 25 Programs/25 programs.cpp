// 25 programs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "math.h"
using namespace std;

int main()
{

	int ProgramSelector = 1;

	for (; ProgramSelector != 0;)
	{


		cout << "                             List of programs" << endl << endl;
		cout << "                ENTER '0' TO CLOSE WHOLE PROGRAM" << endl;
		cout << "             Or enter the number to run that program" << endl;

		cout << "1)Tool tax permmition                  2)N1 N2 greater value "                      << endl;
		cout << "3)Rigth triangle hyp and area calcu    4)Employ Salary  "                           << endl; 
		cout << "5)Binary to dacimal                    6)Factorial and square to it less number"    << endl;
		cout << "7)Perfect deficit or abundant number   8)Palindrome number or not"                  << endl;
		cout << "9)Power of number without built in fn  10)nCr factor"                               << endl;
		cout << "11)How many digits in a number         12)Dacimal to roman"                         << endl;
		cout << "13)Subtraction without minus oprator   14)Fibonacci series"                         << endl;
		cout << "15)ATM transection                     16)Car speed kmph to mph"                    << endl;
		cout << "17)High and low temprature             18)Convert rupees into notes and coins"      << endl;
		cout << "19)Factorial Prime and Even or Odd     20)Dacimal to Binary"                        << endl;
		cout << "21)Convert digits of number in word    22)Addition without + oprator"               << endl;
		cout << "23)Enter date output the day" << endl;


		cout << endl;

		cout << "Enter any number to run that program." << endl;
		cout << "Or enter '0' to close whole program." << endl;
		cout << "             Enter here         =     ";
		cin >> ProgramSelector;

		cout << endl;


		for (; ProgramSelector < 0 || ProgramSelector > 23;)
		{
			cout << "ERROR. Enter 0 to 26.         =    ";
			cin >> ProgramSelector;
		}

		cout << endl;

		if (ProgramSelector == 1)                                                               //Main Program Selector
		{

			char army, licience, idCard, nationality, a;                            //tool plaza permission

			cout << "Do you belong to army?(Y/N)";
			cin >> army;
			switch (army)
			{
			case 'y':
			case 'Y':
			{
						cout << "Do you have licence?(Y/N)";
						cin >> licience;
						switch (licience)
						{
						case 'y':
						case 'Y':
						{
									cout << "Welcom...!!!You can pass througt the tool plaza.";
									a = 0;
									break;
						}
						case 'n':
						case 'N':
						{
									a = 1;
									break;
						}
						default:
						{
								   cout << "You enter an invalid key.";
								   a = 0;
								   break;
						}
						}
						break;
			}
			case 'n':
			case 'N':
			{
						a = 1;
						break;
			}
			default:
			{
					   cout << "You enter an invalid key.";
					   a = 0;
					   break;
			}
			}


			switch (a)
			{
			case 1:
			{
					  cout << "Do you have PAKISTANI nationality?(Y/N)";
					  cin >> nationality;
					  switch (nationality)
					  {
					  case 'y':
					  case 'Y':
					  {
								  a = 1;
								  break;
					  }
					  case 'n':
					  case 'N':
					  {
								  cout << "Sorry...!!!You cannot pass through the tool plaza.";
								  a = 0;
								  break;
					  }
					  default:
					  {
								 cout << "You enter an invalid key.";
								 a = 0;
								 break;
					  }
					  }
			}
				break;
			}


			switch (a)
			{
			case 1:
			{
					  cout << "Do you have offical id card?(Y/N)";
					  cin >> idCard;
					  switch (idCard)
					  {
					  case 'y':
					  case 'Y':
					  {
								  cout << "Welcom...!!!You can pass througt the tool plaza.";
								  break;
					  }
					  case 'n':
					  case 'N':
					  {
								  cout << "Sorry...!!!You cannot pass through the tool plaza.";
								  break;
					  }
					  default:
					  {
								 cout << "You enter an invalid key.";
								 break;
					  }
					  }
			}
			}

		}

		else if (ProgramSelector == 2)                                                               //Main Program Selector
		{

			int n1, n2, modulas, greater, smaller;                                            //N1 N2 greater value

			cout << "Enter the first number.           =   ";
			cin >> n1;

			cout << "Enter the second number.          =   ";
			cin >> n2;

			if (n1 > n2)
			{
				smaller = n2;
				greater = n1;
			}
			else if (n1 < n2)
			{
				smaller = n1;
				greater = n2;
			}

			cout << endl << endl;
			if (n1 == n2)
			{
				cout << "Both the numbers are equal. So both can divide each other.";
			}
			else if (smaller == 0)
			{
				cout << "Cannot be duivide by zero.";
				cout << "The greater number is " << greater << "." << endl;
			}
			else
			{
				modulas = greater % smaller;

				cout << "The greater number is " << greater << "." << endl;

				cout << endl;

				if (modulas == 0)
				{
					cout << "Yes the greater number " << greater << " is multiple of" << endl;
					cout << "(or can be full divided) on smaller number." << smaller;
				}
				else if (modulas != 0)
				{
					cout << "No the greater number " << greater << " is not multiple of" << endl;
					cout << "(or cannot be full divide) on smaller number." << smaller;
				}
			}

			cout << endl;

			if (n1 > 0)
			{
				cout << "First number is greater than zero." << endl;
			}
			else
			{
				cout << "First number is not greater than zero." << endl;
			}

			if (n2 > 0)
			{
				cout << "Second number is greater than zero." << endl;
			}
			else
			{
				cout << "Second number is not greater than zero." << endl;
			}

		}

		else if (ProgramSelector == 3)                                                               //Main Program Selector
		{


			int a, b;                                                                //right angle triangle calculation
			float area, hypotenuse;

			cout << "Enter the length of base(meters).            =   ";
			cin >> a;

			cout << "Enter the length of perpendicular(meters).   =   ";
			cin >> b;

			for (; a < 0 || b < 0;)
			{
				cout << "Length cannot be -ve." << endl;

				cout << "Enter the length of base(meters).            =   ";
				cin >> a;

				cout << "Enter the length of perpendicular(meters).   =   ";
				cin >> b;
			}

			cout << endl;

			hypotenuse = a*a + b*b;
			cout << "The hypotenuse of the triangle is             =   " << sqrt(hypotenuse) << endl << endl;                    // hypotenuse;

			cout << "The area of triangle is                       =   " << (a * b) / 2;


		}

		else if (ProgramSelector == 4)                                                               //Main Program Selector
		{

			int salary, HouseRent, DailyAllowance;                                        //salary of employ

			cout << "Enter the basic salary.                       =     ";
			cin >> salary;

			for (; salary < 0;)
			{
				cout << "ERROR. Salary cannot be -ve." << endl;
				cout << "Enter the basic salary.                       =      ";
				cin >> salary;
			}

			if (salary < 1500)
			{
				HouseRent = salary * 0.1;
				DailyAllowance = salary * 0.9;
				salary = salary + HouseRent + DailyAllowance;

				cout << "The total salary of employ according to " << endl;
				cout << "10% HOUSE RENT and 90% DAILY ALLOWANCE is     =     " << salary;
			}
			else
			{
				HouseRent = salary * 0.2;
				DailyAllowance = salary * 0.95;
				salary = salary + HouseRent + DailyAllowance;

				cout << "The total salary of employ according to " << endl;
				cout << "20% HOUSE RENT and 95% DAILY ALLOWANCE is     =     " << salary;
			}

		}

		else if (ProgramSelector == 5)                                                               //Main Program Selector
		{


			int binary, dacimal, answer = 0;                                              //binary to dacimal

			cout << "Enter a binary number.(maximum 9 digits)        =   ";
			cin >> binary;

			cout << "That number in dacimal is                       =   ";

			for (int power = 0; power < 10; power++)
			{
				dacimal = binary % 10;
				binary = binary / 10;
				answer = answer + dacimal * pow(2, power);
			}
			cout << answer;


		}

		else if (ProgramSelector == 6)                                                               //Main Program Selector
		{


			int input, input2, plus;                                                     //factorial and its lesser numbers sum
			long b = 1;

			cout << "Enter the number less than 17.          =    ";
			cin >> input;

			for (; input < 0;)
			{
				cout << "ERROR. Enter a positive number." << endl;
				cout << "Enter the number less than 17.          =    ";
				cin >> input;

			}

			input2 = input;

			plus = input2 * input2 * -1;

			for (; input > 0; input--)
			{
				b = input * b;
				plus = plus + input * input;

			}

			cout << endl << "The foctorial of " << input2 << " number is            =    " << b << endl;
			cout << "The sum of the square of all " << endl;
			cout << "integers less than " << input2 << " is                 =    " << plus;


		}

		else if (ProgramSelector == 7)                                                               //Main Program Selector
		{


			int b = 0, a = 1;
			long input;

			cout << "Enter a number.";
			cin >> input;

			for (; a <= input; a++)
			{
				if (input % a == 0)
				{
					b = a + b;
				}
			}
			if (input == b / 2)
			{
				cout << "Yes the number is PERFECT.";
			}
			else if (input < (b - a))
			{
				cout << "The number is ABUNDANT.";
			}
			else if (input >(b - a))
			{
				cout << "The number is DEFICIENT.";
			}

		}

		else if (ProgramSelector == 8)                                                               //Main Program Selector
		{


			int input, reverse, a, a1, a2, a3, a4, a5;                                      // given number is palindrome or not?

			cout << "Enter a number of five digits.          =     ";
			cin >> input;
			for (; input < 10000 || input > 99999;)
			{
				cout << "Enter a number of five digits.          =     ";
				cin >> input;
			}
			a5 = input % 10;
			a = input / 10;

			a4 = a % 10;
			a = a / 10;

			a3 = a % 10;
			a = a / 10;

			a2 = a % 10;
			a1 = a / 10;

			cout << endl;
			reverse = a5 * 10000 + a4 * 1000 + a3 * 100 + a2 * 10 + a1;


			cout << endl;

			if (input == reverse)
			{
				cout << "The number is PALINDROME.";
			}
			else
			{
				cout << "NO THE NUMBER IS NOT PALINDROME.";
			}


		}

		else if (ProgramSelector == 9)                                                               //Main Program Selector
		{


			int input, exponent, answer, divider = 0;                                   //power with out built in fn

			cout << "Enter the base.             =    ";
			cin >> input;

			cout << "Enter the exponent          =    ";
			cin >> exponent;

			if (exponent < 0)
			{
				exponent = -1 * exponent;
				divider = 1;
			}

			answer = input;

			for (int stoper = 1; stoper < exponent; stoper++)
			{
				answer = answer * input;
			}

			cout << "Tne answer is ";

			if (divider == 1)
			{
				cout << "1 / " << answer;
			}
			else
			{
				cout << answer;
			}


		}

		else if (ProgramSelector == 10)                                                               //Main Program Selector
		{


			int a = 0, n = 0, r = 1, nMinusr;                                         //nCr factor
			double long  nFactorial = 1, rFactorial = 1, nMinusrFactorial = 1;

			for (; r > n || r <= 0 || n <= 0 || n > 170;)
			{

				if (a != 0)
				{
					cout << "ERROR. r cannot be greater" << endl;
					cout << "than n nor either can be -ve. " << endl;
					cout << "And enter n less than 171." << endl;
				}

				cout << "Enter the number(n).          =    ";
				cin >> n;

				cout << "Enter the (r).                =    ";
				cin >> r;

				a = 1;

			}
			nMinusr = n - r;

			for (; nMinusr > 0; nMinusr--)

			{
				nMinusrFactorial = nMinusrFactorial * nMinusr;
			}

			for (; n > 0; n--)

			{
				nFactorial = nFactorial * n;
			}

			for (; r > 0; r--)

			{
				rFactorial = rFactorial * r;
			}

			cout << "The nCr factor is             =    " << (nFactorial / rFactorial) / nMinusrFactorial;


		}

		else if (ProgramSelector == 11)                                                               //Main Program Selector
		{

			int input, a = 1;

			cout << "Enter a number          =   ";
			cin >> input;

			if (input == 0)
			{
				cout << "The digits is 1";
			}
			else
			{
				for (; input != 0; a++)
				{
					input = input / 10;
				}

				cout << "The digits is " << a - 1;
			}
		}

		else if (ProgramSelector == 12)                                                               //Main Program Selector
		{


			int input, a1, a2, a3, a4, a5;                                  //dacimal to roman

			cout << "Enter a number(maximum 50000).       =   ";
			cin >> input;

			for (; input > 50000 || input <= 0;)
			{
				cout << "ERROR." << endl;
				cout << "Please enter a number of maximum nine digits=    ";
				cin >> input;
			}

			a5 = input % 10;
			input = input / 10;

			a4 = input % 10;
			input = input / 10;

			a3 = input % 10;
			input = input / 10;

			a2 = input % 10;
			a1 = input / 10;

			cout << "That number in roman is       =   ";

			if (a1 == 1)
			{
				cout << "X";
			}
			else if (a1 == 2)
			{
				cout << "XX";
			}
			else if (a1 == 3)
			{
				cout << "XXX";
			}
			else if (a1 == 4)
			{
				cout << "XL";
			}
			else if (a1 == 5)
			{
				cout << "L";
			}

			if (a2 == 1)
			{
				cout << "M";
			}
			else if (a2 == 2)
			{
				cout << "MM";
			}
			else if (a2 == 3)
			{
				cout << "MMM";
			}
			else if (a2 == 4)
			{
				cout << "MV";
			}
			else if (a2 == 5)
			{
				cout << "V";
			}
			else if (a2 == 6)
			{
				cout << "VM";
			}
			else if (a2 == 7)
			{
				cout << "VMM";
			}
			else if (a2 == 8)
			{
				cout << "VMMM";
			}
			else if (a2 == 9)
			{
				cout << "MX";
			}

			if (a3 == 1)
			{
				cout << "C";
			}
			else if (a3 == 2)
			{
				cout << "CC";
			}
			else if (a3 == 3)
			{
				cout << "CCC";
			}
			else if (a3 == 4)
			{
				cout << "CD";
			}
			else if (a3 == 5)
			{
				cout << "D";
			}
			else if (a3 == 6)
			{
				cout << "DC";
			}
			else if (a3 == 7)
			{
				cout << "DCC";
			}
			else if (a3 == 8)
			{
				cout << "DCCC";
			}
			else if (a3 == 9)
			{
				cout << "CM";
			}

			if (a4 == 1)
			{
				cout << "x";
			}
			else if (a4 == 2)
			{
				cout << "xx";
			}
			else if (a4 == 3)
			{
				cout << "xxx";
			}
			else if (a4 == 4)
			{
				cout << "xL";
			}
			else if (a4 == 5)
			{
				cout << "L";
			}
			else if (a4 == 6)
			{
				cout << "Lx";
			}
			else if (a4 == 7)
			{
				cout << "Lxx";
			}
			else if (a4 == 8)
			{
				cout << "Lxxx";
			}
			else if (a4 == 9)
			{
				cout << "xC";
			}




			if (a5 == 1)
			{
				cout << "i";
			}
			else if (a5 == 2)
			{
				cout << "ii";
			}
			else if (a5 == 3)
			{
				cout << "iii";
			}
			else if (a5 == 4)
			{
				cout << "iv";
			}
			else if (a5 == 5)
			{
				cout << "v";
			}
			else if (a5 == 6)
			{
				cout << "vi";
			}
			else if (a5 == 7)
			{
				cout << "vii";
			}
			else if (a5 == 8)
			{
				cout << "viii";
			}
			else if (a5 == 9)
			{
				cout << "ix";
			}


		}

		else if (ProgramSelector == 13)                                                               //Main Program Selector
		{


			int a, b, less, greater, difference = 0;                                        //subtraction eithout - oprator

			cout << "Enter the first number.         =    ";
			cin >> a;

			cout << "Enter the second number.        =    ";
			cin >> b;

			if (a > b)
			{
				less = b;
				greater = a;
			}
			else
			{
				less = a;
				greater = b;
			}

			cout << endl << endl;

			for (; less < greater; less++)
			{
				difference = difference + 1;
			}

			cout << "According to this proceder." << endl;
			cout << endl;
			cout << "	if (a > b)  where a = First Number" << endl;
			cout << "	{                 b = Second Number" << endl;
			cout << "	less = b" << endl;
			cout << "	greater = a" << endl;
			cout << "	}" << endl;
			cout << "	else" << endl;
			cout << "	{" << endl;
			cout << "	less = a" << endl;
			cout << "	greater = b" << endl;
			cout << "	}" << endl;
			cout << endl;
			cout << "	for (; less < greater; less++)" << endl;
			cout << "	{" << endl;
			cout << "	difference = difference + 1;" << endl;
			cout << "	}" << endl << endl;

			cout << "The difference of " << a << " and " << b << " is " << difference << ".";


		}

		else if (ProgramSelector == 14)                                                               //Main Program Selector
		{


			int a = 0, b = 1, range = 0, answer = 0, AnswerPrevious, dicider = 0;      // fibonacci series

			cout << "Enter the maximum point.          =    ";
			cin >> range;
			for (; range < 0 || range > 99999;)
			{
				cout << "The a number from 1 to 99999.       =    ";
				cin >> range;
			}
			cout << "The series is " << endl << a << endl;

			for (; answer < range;)
			{
				if (dicider == 0)
					cout << b << ", ";

				if (dicider == 1)
				{
					AnswerPrevious = answer;
				}
				answer = answer + b;
				if (answer <= range)
				{
					cout << answer << ", ";
				}
				if (dicider == 1)
				{
					b = AnswerPrevious;
				}
				dicider = 1;
			}


		}

		else if (ProgramSelector == 15)                                                               //Main Program Selector
		{


			int password = 123, password2 = 123, balance = 500000, withdraw, OptionSelector = 1;

			cout << "Enter your ATM card." << endl;                                //ATM transection
			cout << "Enter the password.(Hint:123)              =   ";
			cin >> password;

			for (; password != 123; )
			{
				cout << "Incorrect password.";
				cin >> password;
			}
			for (; OptionSelector != 0;)
			{
				cout << "To close program enter      0" << endl;
				cout << "To check balance enter      1" << endl;
				cout << "For withdraw enter          2" << endl;
				cout << "To change password          3" << endl;
				cout << "For mini statement          4" << endl;
				cout << "Enter here      =    ";
				cin >> OptionSelector;

				for (; OptionSelector < 0 || OptionSelector > 4; )
				{
					cout << "ERROR." << endl;
					cout << "Enter 0 to 4." << endl;
					cout << "Enter here      =    ";
					cin >> OptionSelector;
					
				}
				if (OptionSelector == 1)
				{
					cout << "The balance is " << balance << endl;
					cout << endl << endl;
				}
				else if (OptionSelector == 2)
				{
					cout << "Enter an amount to withdraw.               =   ";
					cin >> withdraw;

					for (; withdraw > balance;)
					{
						cout << "Enter an amount less than your balance.    =   ";
						cin >> withdraw;
					}

					balance = balance - withdraw;

					cout << "Your remaining balance is                  =   " << balance << endl;
					cout << endl << endl;
				}
				else if (OptionSelector == 3)
				{
					cout << "Enter a new password.       =   ";
					cin >> password;
					cout << "Conferm password            =   ";
					cin >> password2;
					for (; password2 != password;)
					{
						cout << "Not match" << endl;
						cout << "Enter a new password.       =   ";
						cin >> password;
						cout << "Conferm password            =   ";
						cin >> password2;
					}
					cout << endl << endl;
				}
				else if (OptionSelector == 4)
				{
					cout << "Account no       125426546-075" << endl;
					cout << "Card no          3475876786-766" << endl;
					cout << "ATM CW           3000" << endl;
					cout << "CM TRANSFER CR   41545" << endl;
					cout << endl << endl;
				}


			}
		}

		else if (ProgramSelector == 16)                                                               //Main Program Selector
		{


			int kmph, mph;                                                               //car speed 

			cout << "Enter the speed(kmph).           =     ";
			cin >> kmph;

			cout << endl;
			cout << "The speed in mph is              =     ";
			mph = kmph * 1000;
			cout << mph << endl;

			if (mph > 150)
			{
				cout << "The speed is over 150 mph. You should lower the speed.";
			}
			else if (mph > 100)
			{
				cout << "The speed is over 100 mph. And the speed is eligible for motor way.";
			}
			else if (mph > 80)
			{
				cout << "The speed is over 80 mph.";
			}
			else if (mph < 80)
			{
				cout << "The speed is less than 80 mph.";
			}


		}

		else if (ProgramSelector == 17)                                                               //Main Program Selector
		{


			int first, second, third, forth, fifth, sixth, x, y;                              //high and lower temprature

			cout << "Please the first tempature     =   ";
			cin >> first;

			cout << "Please the second tempature    =   ";
			cin >> second;

			cout << "Please the third tempature     =   ";
			cin >> third;

			cout << "Please the forth tempature     =   ";
			cin >> forth;

			cout << "Please the fifth tempature     =   ";
			cin >> fifth;

			cout << "Please the sixth tempature     =   ";
			cin >> sixth;

			cout << endl;

			if (first > second)
			{
				if (second > third)
				{
					x = third;
				}
				else if (third > second)
				{
					x = second;
				}
			}
			else if (second > first)
			{
				if (first > third)
				{
					x = third;
				}
				else if (third > first)
				{
					x = first;
				}
			}

			if (forth > fifth)
			{
				if (fifth > sixth)
				{
					y = sixth;
				}
				else
				{
					y = fifth;
				}
			}
			else if (fifth > forth)
			{
				if (forth > sixth)
				{
					y = sixth;
				}
				else if (sixth > forth)
				{
					y = forth;
				}
			}


			if (x > y)
			{
				cout << "The lower tempature is         =   " << y;
			}
			else
			{
				cout << "The lower tempature is         =   " << x;
			}


			cout << endl << endl;


			if (first < second)
			{
				if (second < third)
				{
					x = third;
				}
				else if (third < second)
				{
					x = second;
				}
			}
			else if (second < first)
			{
				if (first < third)
				{
					x = third;
				}
				else if (third < first)
				{
					x = first;
				}
			}

			if (forth < fifth)
			{
				if (fifth > sixth)
				{
					y = sixth;
				}
				else
				{
					y = fifth;
				}
			}
			else if (fifth < forth)
			{
				if (forth < sixth)
				{
					y = sixth;
				}
				else if (sixth < forth)
				{
					y = forth;
				}
			}


			if (x < y)
			{
				cout << "The higher tempature is        =   " << y;
			}
			else
			{
				cout << "The higher tempature is        =   " << x;
			}

			cout << endl << endl;


		}

		else if (ProgramSelector == 18)                                                               //Main Program Selector
		{


			long amount;
			int hazar, panchso, soo, panchas, biss, dass, panch, doo, ak;                       //rupees to coins

			cout << "Enter the amount(maximum 9 digits).  =      ";
			cin >> amount;
			for (; amount < 0 || amount >> 999999999;)
			{
				cout << "Enter the amount(maximum 9 digits).    " << endl;
				cout << "And greater than zero                =";
				cin >> amount;
			}

			hazar = amount / 1000;
			amount = amount % 1000;

			panchso = amount / 500;
			amount = amount % 500;

			soo = amount / 100;
			amount = amount % 100;

			panchas = amount / 50;
			amount = amount % 50;

			biss = amount / 20;
			amount = amount % 20;

			dass = amount / 10;
			amount = amount % 10;

			panch = amount / 5;
			amount = amount % 5;

			doo = amount / 2;
			amount = amount % 2;

			ak = amount;

			cout << endl;

			cout << "There are " << endl;
			cout << "Note(s) of thousand             " << hazar << endl;
			cout << "Note(s) of five hundard         " << panchso << endl;
			cout << "Note(s) of hundard              " << soo << endl;
			cout << "Note(s) of fifty                " << panchas << endl;
			cout << "Note(s) of twenty               " << biss << endl;
			cout << "Note(s) of ten                  " << dass << endl;
			cout << "Coin(s) of five                 " << panch << endl;
			cout << "Coin(s) of two                  " << doo << endl;
			cout << "Coin(s) of one                  " << ak;


		}

		else if (ProgramSelector == 19)                                                               //Main Program Selector
		{


			int OprationSelector = 1;                                      //this has three more programs
			for (; OprationSelector != 0;)
			{

				cout << "                             LIST" << endl << endl;
				cout << "   1)Factorial     2)Prime Number or not     3)Even or Odd   0)zero to exit" << endl << endl;

				cout << "                Here     =  ";
				cin >> OprationSelector;

				for (; OprationSelector < 0 || OprationSelector > 3;)
				{
					cout << "Enter 1 to 3." << endl;
					cout << "                Here     =  ";
					cin >> OprationSelector;
				}

				if (OprationSelector == 1)                    //inner opration selector
				{


					long a, b = 1;                   //factorial

					cout << "Enter the number less than 17.        =   ";
					cin >> a;

					for (; a > 0; a--)

					{
						b = b * a;
					}

					cout << "The factorial is                      =   " << b;


				}
				else if (OprationSelector == 2)                    //inner opration selector
				{


					int input, b = 0;                      //prime number or not

					cout << "Enter the number.        =    ";
					cin >> input;

					for (int a = 1; a < input; a++)
					{
						if (input % a == 0)
						{
							b = b + 1;
						}
					}

					if (b == 1 || b == 0)
					{
						cout << "The number is prime.";
					}
					else
					{
						cout << "the number is not a prime.";
					}


				}
				else if (OprationSelector == 3)                    //inner opration selector
				{


					int a, b;                         //even or odd

					cout << "Enter a number.     =    ";
					cin >> a;

					b = a % 2;

					cout << endl;

					if (b == 1)
					{
						cout << "Your digit is ODD.";
					}
					else
					{
						cout << "Your digit is EVEN.";
					}


				}
			}

		}

		else if (ProgramSelector == 20)                                                               //Main Program Selector
		{

			int input, reverse_binary = 2, actual_binary, remainder, decimal;             //dacimal tobinary

			do{
				cout << "Enter a positive integer       =    ";
				cin >> input;
			} while (input < 0);

			decimal = input;

			if (input < 2){ actual_binary = input; }
			else{
				for (; input > 1;){
					remainder = input % 2;

					if (remainder == 0){ reverse_binary = reverse_binary * 10; }
					else{ reverse_binary = (reverse_binary * 10) + 1; }

					input = input / 2;
				}

				reverse_binary = (reverse_binary * 10) + 1;

				actual_binary = reverse_binary % 10;
				reverse_binary = reverse_binary / 10;
				for (; reverse_binary != 2;){

					remainder = reverse_binary % 10;
					reverse_binary = reverse_binary / 10;
					if (remainder == 0){ actual_binary = actual_binary * 10; }
					else{ actual_binary = (actual_binary * 10) + 1; }
				}
			}

			cout << "Decimal value:" << decimal << endl << "Binary Value:" << actual_binary << endl;


		}

		else if (ProgramSelector == 21)                                                               //Main Program Selector
		{

			int input, output, number = 0, ZeroStoper = 0;                                      //convert digits of number into word

			cout << "Enter the number(maximum nine digits).       =   ";
			cin >> input;

			for (; input > 999999999;)
			{
				cout << "ERROR" << endl;
				cout << "Enter the number(maximum nine digits).       =   ";
				cin >> input;
			}
			if (input < 0)
			{
				cout << " MINUS";
				input = input * -1;
			}

			//	input = input * 10 + 2;
			for (int a = 1; a < 10; a++)
			{
				output = input % 10;
				input = input / 10;

				number = number * 10 + output;
			}

			for (int a = 1; a < 10; a++)
			{
				output = number % 10;
				number = number / 10;
				if (output != 0)
				{
					ZeroStoper = 1;
				}
				if (ZeroStoper == 1)
				{
					if (output == 0)
					{
						cout << " ZERO";
					}
					else if (output == 1)
					{
						cout << " ONE";
					}
					else if (output == 2)
					{
						cout << " TWO";
					}
					else if (output == 3)
					{
						cout << " THREE";
					}
					else if (output == 4)
					{
						cout << " FOUR";
					}
					else if (output == 5)
					{
						cout << " FIVE";
					}
					else if (output == 6)
					{
						cout << " SIX";
					}
					else if (output == 7)
					{
						cout << " SEVEN";
					}
					else if (output == 8)
					{
						cout << " EIGHT";
					}
					else if (output == 9)
					{
						cout << " NINE";
					}
				}

			}

		}

		else if (ProgramSelector == 22)                                                               //Main Program Selector
		{

			int a, b;                                                    //addition without +

			cout << "Enter the first number.        =   ";
			cin >> a;

			cout << "Enter the second number.       =   ";
			cin >> b;

			cout << endl;

			cout << "According to this formula." << endl;
			cout << "     -(-a - b)" << endl;
			cout << "     Where  a = First Number" << endl;
			cout << "     And    b = Second Number" << endl << endl;

			cout << "The sum of " << a << " and " << b << " is           =   ";

			cout << -(-a - b);


		}

		else if (ProgramSelector == 23)                                                               //Main Program Selector
		{

			long days = 0, year;                                                                //enter date out day
			int date, month, DayDecieder = 8, leapDecieder;

			cout << "Enter the date.               =     ";
			cin >> date;

			cout << "Enter the month.              =     ";
			cin >> month;

			cout << "Enter the  year.              =     ";
			cin >> year;

			if (month == 1)
			{
				days = 0;
			}
			else if (month == 2)
			{
				days = 31;
			}
			else if (month == 3)
			{
				days = 59;
			}
			else if (month == 4)
			{
				days = 90;
			}
			else if (month == 5)
			{
				days = 120;
			}
			else if (month == 6)
			{
				days = 151;
			}
			else if (month == 7)
			{
				days = 181;
			}
			else if (month == 8)
			{
				days = 212;
			}
			else if (month == 9)
			{
				days = 243;
			}
			else if (month == 10)
			{
				days = 273;
			}
			else if (month == 11)
			{
				days = 304;
			}
			else if (month == 12)
			{
				days = 334;
			}

			days = days + date;

			if (0 == year % 4 && month != 1 && month != 2)
			{
				days = days + 1;
			}

			year = year - 1990;

			days = year * 365 + days;

			leapDecieder = year / 4;

			days = leapDecieder + days;



			DayDecieder = days % 7;
			if (days <= 7)
			{

				cout << "The day is ";
				cout << DayDecieder << endl;

				if (DayDecieder == 0)
				{
					cout << "SUNDAY.";
				}
				else if (DayDecieder == 1)
				{
					cout << "MONDAY.";
				}
				else if (DayDecieder == 2)
				{
					cout << "TUESDAY.";
				}
				else if (DayDecieder == 3)
				{
					cout << "WEDNESDAY.";
				}
				else if (DayDecieder == 4)
				{
					cout << "THUSDAY.";
				}
				else if (DayDecieder == 5)
				{
					cout << "FRIDAY.";
				}
				else if (DayDecieder == 6)
				{
					cout << "SATURDAY.";
				}

			}
			else
			{
				if (DayDecieder == 6)
				{
					cout << "SUNDAY.";
				}
				else if (DayDecieder == 0)
				{
					cout << "MONDAY.";
				}
				else if (DayDecieder == 1)
				{
					cout << "TUESDAY.";
				}
				else if (DayDecieder == 2)
				{
					cout << "WEDNESDAY.";
				}
				else if (DayDecieder == 3)
				{
					cout << "THUSDAY.";
				}
				else if (DayDecieder == 4)
				{
					cout << "FRIDAY.";
				}
				else if (DayDecieder == 5)
				{
					cout << "SATURDAY.";
				}
			}

		}

		cout << endl << endl;

	}



	return 0;
	}


