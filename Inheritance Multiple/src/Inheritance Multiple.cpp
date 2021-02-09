//============================================================================
// Name        : Inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class add {
public:
	int a = 10,b = 10,c;
	void aa() {
		c=a+b;
		cout << "addition is : " << c << endl;
	}

};
class sub {
public:
	int x = 10, y = 5, z;
	void ss() {
		z=x-y;
		cout << "subtraction is : " << z << endl;
	}
};
class solution: public add, public sub {

};
int main() {
	solution s1;
	s1.aa();
	s1.ss();
	return 0;
}
