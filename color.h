/*******
**instructor:Gary, Richard
** Author: Ahmed Kmail
** Assignment : Project 05
** Course : CS555 C++ For Programmers
** Term : Spring, 2018
** School : City University of Seattle
**
*******/
#ifndef COLOR_H
#define COLOR_H
#include <iostream>
#include <ostream>
#include <string>
using namespace std;


class RGB
{
	friend ostream& operator<<(ostream& output, const RGB& b);								//output opertor
	friend istream& operator>>(istream& input, RGB& b);										//input operator
	friend RGB operator+(const RGB& b1, const RGB& b2);								//Addition Operator
	friend RGB operator-(const RGB& b1, const RGB& b2);								//Subtraction
private:
	int Red;
	int Blue;
	int Green;
public:
	RGB & operator+=(int x)														//+= will add the int value to all the colors (10,10,10)+=1 >>(11,11,11)
	{
		Red += x;
		Blue += x;
		Green += x;
		return *this;
	}
	RGB& operator-=(int x)														//Similarly
	{
		Red -= x;
		Blue -= x;
		Green -= x;
		return *this;
	}

	RGB()																					//default constructor
	{
		cout << "enter Green Blue Red";
		cout<< endl;
		cin >> Green; cin >> Blue;cin >>Red;
		

	}

	RGB(int R, int B, int G)																			//defined constructor
	{
		Red = R;
		Green = G;
		Blue = B;
	}
};


#endif
