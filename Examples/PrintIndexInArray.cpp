///////////////////////////////////////////////////////////////////////////////////////
// Name:   PrintIndexInArray.cpp                                                    //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://idielectronica.blogspot.com/                                       //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Date:   11-18-2014                                                                //
//                                                                                   //
// Description: This example declares an array with assigned values. Then requests   //
// the user a number from 0 through 9, which is then matched to the index number in  //
// the array. Then the index number and its respective value are printed.            //
// The program uses loops and relational operators to go through the array.			 //
//                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"					// Comment out if not using Visual Studio
#include <iostream>

int main()
{
	int anArray[9] = { 4, 7, 9, 3, 8, 2, 1, 6, 5 };		// Declare array
	int nNum;						// Declare nNum outside of loops to maintain it

	// Do while loop continues if value entered is out of 1-9 range
	do
	{
		std::cout << "Enter a number from 1 to 9: ";
		std::cin >> nNum;
		std::cout << std::endl;
	} while (nNum < 1 || nNum > 9);
	
	// The following For Loops print a table with the array indexes and values
	std::cout << std::endl << std::endl << "Index ";
	for (int nCount = 1; nCount < 10; nCount++)
	{
		std::cout << "  " << nCount << "  "; 
	}
	std::cout << std::endl;
	std::cout << "----------|----|----|----|----|----|----|----|------";
	std::cout << std::endl << "Number";

	for (int nCount = 1; nCount < 10; nCount++)
	{
		std::cout << "  " << anArray[nCount - 1] << "  ";
	}
	std::cout << std::endl << std::endl;

	// This loop will print the array index corresponding to the number entered by user
	for (int nCount = 1; nCount < 10; nCount++)
	{
		if (anArray[nCount-1] == nNum)		// If number entered matches value in array 
		{									
			std::cout << std::endl;
			std::cout << "Number " << nNum << " has index " << nCount << std::endl;
		}
	}

	std::getchar();
	std::getchar();
	return 0;
}