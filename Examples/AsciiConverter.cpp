///////////////////////////////////////////////////////////////////////////////////////
// Name:   AsciiConverter.cpp                                                        //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://idielectronica.blogspot.com/                                       //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Date:   11-10-2014                                                                //
//                                                                                   //
// Description: This program converts a character into its ASCII decimal value or    //
// or converts an ASCII decimal value into its equivalent character.                 //
//                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include <iostream>

// This function takes the ASCII decimal number and outputs the character mapped to it
void AsciiToChar()
{
	std::cout << "Enter an ASCII decimal value: ";
	int x;
	std::cin >> x;
	std::cout << std::endl << "Your ASCII decimal number is mapped to character: " 
		      << char(x);
}

// This function takes a character and outputs its corresponding ASCII decimal value
void CharToAscii()
{
	std::cout << "Enter a single character: ";
	char x;
	std::cin >> x;
	std::cout << std::endl << "Your character has the ASCII value: " << int(x);
}

// This is the main function
int main()
{
	std::cout << "ASCII Converter" << std::endl << std::endl;
	std::cout << "[1]  Enter ASCII value" << std::endl << "[2]  Enter character"
		<< std::endl << "[3]  Exit" << std::endl << std::endl;
	int y;
	std::cin >> y;
	if (y == 1)					// if statement is used for option menu
	{
		std::cout << std::endl << std::endl;
		AsciiToChar();
	}
	else if (y == 2)
	{
		std::cout  << std::endl << std::endl;
		CharToAscii();
	}
	else
	{
		std::cout << std::endl << std::endl << "Good bye!!";
	}
	std::getchar();
	std::getchar();
	return 0;
}