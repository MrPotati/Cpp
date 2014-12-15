///////////////////////////////////////////////////////////////////////////////////////
// Name:   SimpleCalculator.cpp                                                          //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://idielectronica.blogspot.com/                                       //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Date:   11-11-2014                                                                //
//                                                                                   //
// Description: This program requests two numbers and then asks if you want to add,  //
// subtract, multiply or divide them.											     //
//                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"							// Comment out if not using Visual Studio
#include <iostream>

// Declaration of the 4 operators
void add(float x, float y)
{
	std::cout << x + y;
}

void subtract(float x, float y)
{
	std::cout << x - y;
}

void multiply(float x, float y)
{
	std::cout << x * y;
}

void divide(float x, float y)
{
	std::cout << x / y;
}

int main()
{
	std::cout << "Math Operator" << std::endl << std::endl;
	
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

	// if statement is used for option menu
	if (z == '+')					
	{
		std::cout << std::endl << std::endl;
		std::cout << "Answer: ";
		add(x,y);
	}
	else if (z == '-')
	{
		std::cout << std::endl << std::endl;
		std::cout << "Answer: ";
		subtract(x,y);
	}
	else if (z == '*')
	{
		std::cout << std::endl << std::endl;
		std::cout << "Answer: ";
		multiply(x,y);
	}
	else if (z == '/')
	{
		std::cout << std::endl << std::endl;
		std::cout << "Answer: ";
		divide(x,y);
	}
	else
	{
		std::cout << std::endl << std::endl << "Good bye!!";
	}
	std::getchar();
	std::getchar();
	return 0;

}