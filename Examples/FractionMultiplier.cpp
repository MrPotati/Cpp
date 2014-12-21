///////////////////////////////////////////////////////////////////////////////////////
// Name:   FractionMultiplier.cpp                                                    //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://idielectronica.blogspot.com/                                       //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Date:   11-15-2014                                                                //
//                                                                                   //
// Description: This program requests to input two fractions, then multiplies them.  //
// and shows the result in decimals. For this examples, each fraction is created     //
// using structures.                                                                 //
//                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"							// Comment out if not using Visual Studio
#include <iostream>

// Define the structure
struct Fract
{
	int 	nDenominator;
	int 	nNumerator;
};

// displays and multiplies fractions. prints result in decimals
void Multiply(Fract sFrac1, Fract sFrac2)
{
	std::cout << sFrac1.nNumerator << "/" << sFrac1.nDenominator << " x ";
	std::cout << sFrac2.nNumerator << "/" << sFrac2.nDenominator << " = ";
	std::cout << float(sFrac1.nNumerator*sFrac2.nNumerator) /
		float(sFrac1.nDenominator*sFrac2.nDenominator);
}

int main()
{
	Fract sFrac1;		// create Fraction struct for sFrac1 
	Fract sFrac2;        // create Fraction struct for sFrac2

	std::cout << "Fraction Multiplier";

	std::cout << "Insert numerator for first fraction: ";
	std::cin >> sFrac1.nNumerator;
	std::cout << "Insert denominator for first fraction: ";
	std::cin >> sFrac1.nDenominator;
	std::cout << std::endl;

	std::cout << "Insert numerator for second fraction: ";
	std::cin >> sFrac2.nNumerator;
	std::cout << "Insert denominator for second fraction: ";
	std::cin >> sFrac2.nDenominator;
	std::cout << std::endl;

	Multiply(sFrac1, sFrac2);	// start Multiply function using structs
	std::getchar();
	std::getchar();
	return 0;
}