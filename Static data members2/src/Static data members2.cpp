//============================================================================
// Name        : Static.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

class demo {
	static int x;
public:
	void function1() {
		x = x + 1;
	}
	void function2() {
		cout << "x = " << x << endl;
	}
};

int demo::x;

int main() {
	demo obj1;
	obj1.function2();
	obj1.function1();
	obj1.function2();

	return 0;
}
