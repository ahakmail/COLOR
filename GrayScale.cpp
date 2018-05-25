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
#include "GrayScale.h"
ostream& operator<<(ostream& output, const Gscale& b)
{
	output << "{Black: " << b.BlackNess << "}" << endl;
	return output;
}			    //
istream& operator>>(istream& input, Gscale& b )//in will enter 1 number 
{
	cout << "enter BlackNess" << endl;
	input >> b.BlackNess;
	return input;
}
Gscale operator+(const Gscale& First, const Gscale& Second) //adding operator
{
	Gscale sum = First;
	sum.BlackNess += Second.BlackNess;

	return sum;

}
Gscale operator-(const Gscale& First, const Gscale& Second)// - operator
{
	Gscale sum = First;
	sum.BlackNess-= Second.BlackNess;

	return sum;

}
