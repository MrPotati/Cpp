///////////////////////////////////////////////////////////////////////////////////////
// Name:   SortArray.cpp									                         //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://idielectronica.blogspot.com/                                       //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Date:   11-20-2014                                                                //
//                                                                                   //
// Description: This example declares and prints an array with assigned values. 	 //
// Then sorts the numbers in the array from lowest to highest and prints the new     //
// array values.
//                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"					// Comment out if not using Visual Studio
#include <iostream>
//#include <algorithm>


const int nSize = 7;
int anArray[nSize] = { 30, 60, 20, 50, 70, 40, 10 };

int main()
{
	// Print array with initial values
	std::cout << "Initial Array: ";
	for (int nCount = 0; nCount < nSize; nCount++)
	{
		std::cout << anArray[nCount] << "  ";
	}
	
	for (int nIndex = 0; nIndex < nSize; nIndex++)     // Loop goes through each index
	{
		int nMinIndex = nIndex;		// Placeholder for smallest index found
	
		// for loop counts thru index values larger than nIndex
		for (int nCurrentIndex = nIndex + 1; nCurrentIndex < nSize; nCurrentIndex++)
		{
			// loop compares each array value and keeps index of lowest value
			if (anArray[nCurrentIndex] < anArray[nMinIndex])  
				nMinIndex = nCurrentIndex;					  
		}
	
		std::swap(anArray[nIndex], anArray[nMinIndex]); // Swaps current array value 
	}													// with value in nMinIndex

	// Print array with sorted values
	std::cout << std::endl << std::endl << "Sorted Array: ";
	for (int nCount = 0; nCount < nSize; nCount++)
	{
		std::cout << anArray[nCount] << "  ";
	}

	std::getchar();
	std::getchar();
	return 0;
}