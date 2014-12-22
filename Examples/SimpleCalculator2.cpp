///////////////////////////////////////////////////////////////////////////////////////
// Name:   SimpleCalculator2.cpp                                                     //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://idielectronica.blogspot.com/                                       //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Date:   11-16-2014                                                                //
//                                                                                   //
// Description: This program requests two numbers and then asks if you want to add,  //
// subtract, multiply or divide them. This version uses a function calculate()       //
// which uses switch statements.                                                     //
//                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"							// Comment out if not using Visual Studio
#include <iostream>

// displays two numbers inserted by user, shows solution using operator entered
void calculate(float x, float y, char z)
{
	std::cout << std::endl;
	std::cout << x << " " << z << " " << y << " = ";
	switch (z)		// uses operator inserted by user
	{
	case '+': std::cout << x + y;
		break;
	case '-': std::cout << x - y;
		break;
	case '*': std::cout << x * y;
		break;
	case '/': std::cout << x / y;
		break;
	default: std::cout << "Unknown operator";
	}
}


		int main()
	{
		std::cout << "Calculator" << std::endl << std::endl;

		// Requests first number for operation
		std::cout << "Enter the first number: ";
		float x;
		std::cin >> x;
		std::cout << std::endl << std::endl;

		// Requests second number for operation
		std::cout << "Enter the second number: ";
		float y;
		std::cin >> y;
		std::cout << std::endl << std::endl;

		// Request for type of operation
		std::cout << "Pick the operator (+,-,*,/): ";
		char z;
		std::cin >> z;

		calculate(x, y, z);   // Calls calculate() function
		
		std::getchar();
		std::getchar();

		return 0;
	}