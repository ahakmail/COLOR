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
#include"CMYK.h"
#include"GrayScale.h"




void rgb() {

	RGB A(12, 12, 12);
	RGB B(200, 200, 200);

	A += 19;
	A = A + B;
	A -= 19;
	A = A - B;

	cout << A << endl;
	cin >> B;
	cout << B;


}
void cmyk() {
	CMYK a(12, 13, 14, 15);
	CMYK b(200, 200, 200, 200);

	a += 19;
	a = a + b;
	a -= 19;
	a = a - b;

	cout << a << endl;
	cin >> b;
	cout << b;

}
void black() {

	Gscale A1(12);
	Gscale B1(200);

	A1 += 19;
	A1 = A1 + B1;
	A1 -= 19;
	A1 = A1 - B1;

	cout << A1 << endl;
	cin >> B1;
	cout << B1;

}


int main()
{
	
	cout << "rgb"<<endl;
	rgb();
	cout << "cmyk" << endl;
	cmyk();
	cout << "black" << endl;
	black ();


}