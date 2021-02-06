//============================================================================
// Name        : Counstructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Demo {
public:
	int part;
	Demo(int x) {
		part = x;
	}
};

int main() {
	Demo d1(10);
	Demo d2(20);
	Demo d3(30);
	cout << d1.part << endl;
	cout << d2.part << endl;
	cout << d3.part << endl;

}
