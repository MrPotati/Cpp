///////////////////////////////////////////////////////////////////////////////////////
// Name:   PrintValueInArray.cpp                                                     //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://idielectronica.blogspot.com/                                       //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Date:   11-18-2014                                                                //
//                                                                                   //
// Description: This example declares an array with assigned values. Then requests   //
// the user the index number and prints the equivalent value in the array using	     //
// if and goto statements.															 //
//                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"							// Comment out if not using Visual Studio
#include <iostream>

int main()
{
	int anArray[9] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };  // Declares array with 9 integers
													 // Assigns initial values to array
	tryagain:										 // Goto statement label

	std::cout << "Enter a number from 0 to 8: ";
	int nNumber;
	std::cin >> nNumber;

	if (nNumber >= 0 && nNumber < 9)
	{
		std::cout << std::endl;
		std::cout << "Index " << nNumber << " in array is: ";
		std::cout << anArray[nNumber] << std::endl;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "Number out of range. Try again!" << std::endl << std::endl;
		goto tryagain;								// Go back to the beginning
	}
		

	std::getchar();
	std::getchar();

	return 0;
}