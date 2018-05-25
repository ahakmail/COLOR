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
#include "color.h"
ostream& operator<<(ostream& output, const RGB& b)
{
	output << "{Red: " << b.Red <<", Green: " <<b.Green << ", Blue: " << b.Blue <<"}"<<endl;
	return output;
}			    //
istream& operator>>(istream& input, RGB& b)   //in will enter 3 numbers in a raw
{
	cout << "enter Green Blue Red"<<endl;
	input >> b.Green >> b.Blue>> b.Red;
	return input;
}
RGB operator+(const RGB& b1, const RGB& b2) //adding operator
{
	RGB sum = b2;
	sum.Blue += b1.Blue;
	sum.Green += b1.Green;
	sum.Red += b1.Red;

	return sum;

}
RGB operator-(const RGB& First, const RGB& Second) // - operator
{
	RGB sum = First;
	sum.Blue -= Second.Blue;
	sum.Green -= Second.Green;
	sum.Red -= Second.Red;

	return sum;

}
