///////////////////////////////////////////////////////////////////////////////////////
// Name:   PrintArrayWForLoop.cpp                                                    //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://idielectronica.blogspot.com/                                       //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Date:   11-18-2014                                                                //
//                                                                                   //
// Description: This example declares an array with assigned values and uses a for   //
// loop to print each value in the array.					   					     //
//                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"							// Comment out if not using Visual Studio
#include <iostream>

int main()
{
	int anArray[9] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };  // Declares array with 9 integers
	
	// Loop prints each value in array 
	for (int nCnt = 0; nCnt < 9; nCnt++)
	{
		std::cout << anArray[nCnt] << std::endl;
	}
	std::getchar();
	std::getchar();

	return 0;
}