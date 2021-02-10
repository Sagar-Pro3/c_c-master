//============================================================================
// Name        : Binarry.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class name {
public:
	int a, b;
	void set(int x, int y) {
		a = x;
		b = y;
	}
	void operator +(name cn2) {
		int c=a+cn2.a;
		int d=b+cn2.b;
		cout<<c<<d;
	}
	void dis() {
		cout << a << b;
	}
};
int main() {
	name n1,n2;
	n1.set(10, 20);
	n2.set(30,40);
	n1+n2;
	//n1.dis();
	return 0;
}
