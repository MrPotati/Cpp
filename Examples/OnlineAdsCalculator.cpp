///////////////////////////////////////////////////////////////////////////////////////
// Name:   OnlineAdsCalculator.cpp                                                   //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://idielectronica.blogspot.com/                                       //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Date:   11-14-2014                                                                //
//                                                                                   //
// Description: This program requests the number of visitors to a website, the % of  //
// people who clicked on the ad and the money received per click. Then, calculates   //
// the total revenue at the end of the day. For this example we use structures.      //
//                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"							// Comment out if not using Visual Studio
#include <iostream>

// Define the structure
struct Advertising
{
 int 	nVisits;
 float	fRatio;
 float	fPayPerClick;
};

// Reports the values input 
void Report(Advertising sToday)
{
	std::cout << "Number of visits:    " << sToday.nVisits << std::endl;
	std::cout << "% of Ads Clicked:    " << sToday.fRatio << " %" << std::endl;
	std::cout << "$ per Ad Click:    $ " << sToday.fPayPerClick << std::endl << std::endl;
	float fTotal = sToday.nVisits*(sToday.fRatio/100)*sToday.fPayPerClick;
	std::cout << "Total Revenue:     $ " << fTotal;
}

int main()
{
	Advertising sToday;		// Create Advertising struct for Today
	std::cout << "Ad Revenue Calculator" << std::endl << std::endl;

	std::cout << "Insert number of page visits:         ";
	std::cin >> sToday.nVisits;
	std::cout << "Insert percentage of ads clicked:     ";
	std::cin >> sToday.fRatio;
	std::cout << "Insert $$ per ad clicked:           $ ";
	std::cin >> sToday.fPayPerClick;
	std::cout << std::endl << std::endl;
	
	Report(sToday);
	std::getchar();
	std::getchar();
	return 0;
}