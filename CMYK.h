/*******
**instructor:Gary, Richard
** Author: Ahmed Kmail
** Assignment : Project 05
** Course : CS555 C++ For Programmers
** Term : Spring, 2018
** School : City University of Seattle
**
*******/
#ifndef CMYK_H
#define CMYK_H
#include <iostream>
#include <ostream>
#include <string>
using namespace std;


class CMYK
{
	friend ostream& operator<<(ostream& output, const CMYK& b);								//output opertor
	friend istream& operator>>(istream& input, CMYK& b);										//input operator
	friend CMYK operator+(const CMYK& b1, const CMYK& b2);								//Addition Operator
	friend CMYK operator-(const CMYK& b1, const CMYK& b2);								//Subtraction
private:
	int cyan;
	int magenta;
	int yellow;
	int key;

public:
	CMYK & operator+=(int x)														//+= will add the int value to all the colors (10,10,10)+=1 >>(11,11,11)
	{
		cyan += x;
		magenta += x;
		yellow += x;
		key += x;
		return *this;
	}
	CMYK& operator-=(int x)														//Similarly
	{
		cyan -= x;
		magenta -= x;
		yellow -= x;
		key -= x;
		return *this;
	}

	CMYK()																					//default constructor
	{
		cout << "enter CYAN MAGENTA YELLOW KEY-BLACK :";
		cout << endl;
		cin >> cyan;
		cin >> magenta;
		cin >> yellow;
		cin >> key;
		
	}

	CMYK(int c, int m, int y,int k)																			//defined constructor
	{
		cyan = c;
		yellow = y;
		magenta = m;
		key = k;

	}
};


#endif
