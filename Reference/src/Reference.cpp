//============================================================================
// Name        : Reference.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a;
	double b;

	int &c = a;
	double &d = b;

	a = 5;
	cout << "value of a is : " << a << endl;
	cout << "value of reference c is : " << c << endl;
	cout << endl;
	b = 25.5;
	cout << "value of b is : " << b << endl;
	cout << "value of reference d is : " << d << endl;
	return 0;
}
