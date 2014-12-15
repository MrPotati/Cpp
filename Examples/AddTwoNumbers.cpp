///////////////////////////////////////////////////////////////////////////////////////
// Name:   AddTwoNumbers.cpp                                                         //
//                                                                                   //
// Author: Sergio PL                                                                 //
//         http://idielectronica.blogspot.com/                                       //
//         http://github.com/MrPotati/                                               //
//                                                                                   //
// Date:   11-09-2014                                                                //
//                                                                                   //
// Description: This program reads two numbers from the user, adds them up, and      //
// prints it out to the console. The program uses function ReadNumber() to get       //
// each number, and function WriteAnswer() to write to the console.                  //
//                                                                                   //
///////////////////////////////////////////////////////////////////////////////////////


#include "stdafx.h"					       //Comment out if not using Visual Studio
#include <iostream>

//Requests number to be added
int ReadNumber()
{
	std::cout << "Enter a number: ";
	int x;
	std::cin >> x;
	return x;
}

// Print answer
void WriteAnswer(int x)
{
	std::cout << "Your answer is: " << x << std::endl;
}

int main()
{
	int x = ReadNumber();
	int y = ReadNumber();
	WriteAnswer(x+y);
	std::getchar();					//Prevent console from closing
	std::getchar();
	return 0;
}
