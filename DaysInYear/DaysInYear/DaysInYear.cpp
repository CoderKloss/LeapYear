// DaysInYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int yearone, yeartwo, yearrange;
    std::cout << "Enter year one\n";
	std::cin >> yearone ;
	std::cout << "Enter year two\n";
    std::cin >> yeartwo ;
	yearrange = yeartwo - yearone;
	std::cout << "Year one is " << yearone << " Year two is " << yeartwo << "\n";
	std::cout << "The number of years is " << yearrange << "\n";
	int yearArray [2200] ;

	for (int a = yearone; a <= yeartwo ; ) 
	{
		yearArray[a] = 365;
		std::cout << a ;
		if (a % 4 == 0)
		{
			if (a % 100 == 0) 
			{
				if (a % 400 != 0) 
				{
					std::cout << " Not a Leap Year (divisible by 100 but not by 400 rule) ";
				}
				else 
				{
					std::cout << " Leap year (divisible by 4, 100, and 400 rule)";
				}
			}
			else 
				{
				std::cout << " Leap year (divisible by 4 but not 100 rule) ";
				}
			//std::cout << " Leap year!!! (divisible by 4) " ;
			yearArray[a] = 366;
		}
		std::cout << "\n";
		a++;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
