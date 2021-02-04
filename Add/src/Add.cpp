//============================================================================
// Name        : Add.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class add {
public:
	int a, b, c;
	void sum() {
		a = 10, b = 15;
		c = a + b;
	}
	void dis() {
		cout << "Addition is : " << c;
	}
};

int main() {
	add add1;
	add1.sum();
	add1.dis();
	return 0;
}
