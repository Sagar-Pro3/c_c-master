//============================================================================
// Name        : Inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class data {
public:
	int a = 40, b = 30, c;

};
class addition: public data {
public:
	void add() {
		c = a + b;
		cout << "addition result is : " << c << endl;
	}

};
class subtraction: public data {
public:
	void sub() {
		c = a - b;
		cout << "subtraction result is : " << c << endl;
	}

};
class multiplication: public data {
public:
	void mul() {
		c = a * b;
		cout << "multiplication result is : " << c << endl;
	}

};
int main() {
	addition a1;
	a1.add();
	subtraction s1;
	s1.sub();
	multiplication m1;
	m1.mul();
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
