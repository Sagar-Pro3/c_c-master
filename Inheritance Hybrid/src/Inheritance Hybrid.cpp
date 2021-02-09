//============================================================================
// Name        : Inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class one {
public:
	int x;
};
class two: public one {
public:
	two() {
		x = 10;
	}
};
class three {
public:
	int y;
	three() {
		y = 10;
	}
};
class four: public two, public three {
public:
	void mul() {
		cout << "Multiplication is : " << x*y << endl;
	}
};
int main() {
	four f1;
	f1.mul();
	return 0;
}
