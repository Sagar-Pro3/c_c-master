//============================================================================
// Name        : Unary.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
#include <iostream>
using namespace std;
class unary {
public:
	int a, b;
	void operator -() {
		a = -a;
		b = -b;
		/*a = -a;
		b = -b;*/
	}
	void set(int x, int y) {
		a = x;
		b = y;
	}
	void display() {
		cout << a;
		cout << b;
	}
};
int main() {
	unary u1;
	u1.set(1, 2);
	-u1;
	u1.display();
	return 0;
}
