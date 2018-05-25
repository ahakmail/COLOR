/*******
**instructor:Gary, Richard
** Author: Ahmed Kmail
** Assignment : Project 05
** Course : CS555 C++ For Programmers
** Term : Spring, 2018
** School : City University of Seattle
**
*******/
#ifndef GRAY_H
#define GRAY_H
#include <iostream>
#include <ostream>
#include <string>
using namespace std;


class Gscale
{
	friend ostream& operator<<(ostream& output, const Gscale& b);								//output opertor
	friend istream& operator>>(istream& input, Gscale& b);										//input operator
	friend Gscale operator+(const Gscale& b1, const Gscale& b2);								//Addition Operator
	friend Gscale operator-(const Gscale& b1, const Gscale& b2);								//Subtraction
private:
	int BlackNess;
public:
	Gscale & operator+=(int x)														//+= will add the int value to all the colors (10,10,10)+=1 >>(11,11,11)
	{
		BlackNess += x;
		return *this;
	}
	Gscale& operator-=(int x)														//Similarly
	{
		
		BlackNess -= x;
		return *this;
	}

	Gscale()																					//default constructor
	{
		cout << "enter Gray Scale";
		cout << endl;
		cin >> BlackNess; 


	}

	Gscale(int B)																			//defined constructor
	{
		BlackNess = B;
	}
};


#endif
