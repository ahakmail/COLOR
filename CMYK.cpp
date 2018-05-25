/*******
**instructor:Gary, Richard
** Author: Ahmed Kmail
** Assignment : Project 05
** Course : CS555 C++ For Programmers
** Term : Spring, 2018
** School : City University of Seattle
**
*******/
#include"stdafx.h"
#include "CMYK.h"
ostream& operator<<(ostream& output, const CMYK& b)
{
	output << "{cyan: " << b.cyan << ", Yellow: " << b.yellow << ", Magenta: " << b.magenta << ", key-Black: " << b.key << "}" << endl;
	return output;
}			    //
istream& operator>>(istream& input, CMYK& b)     //in will enter 4 numbers in a raw
{
	cout << "enter yellow magenta cyan keyblack" << endl;
	input >> b.yellow >> b.magenta >> b.cyan>>b.key;
	return input;
}
CMYK operator+(const CMYK& b1, const CMYK& b2) //adding operator
{
	CMYK sum = b2;
	sum.magenta += b1.magenta;
	sum.yellow += b1.yellow;
	sum.cyan += b1.cyan;
	sum.key += b1.key;
	return sum;

}
CMYK operator-(const CMYK& First, const CMYK& Second)   // - operator
{
	CMYK sum = First;
	sum.magenta -= Second.magenta;
	sum.yellow -= Second.yellow;
	sum.cyan -= Second.cyan;
	sum.key -= Second.key;

	return sum;

}
