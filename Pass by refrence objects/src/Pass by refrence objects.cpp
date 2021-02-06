//============================================================================
// Name        : Pass.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class sample {
public:
	int a, b;
	void set(int x, int y);
	void add(sample &cob2);
	void disres();
};
void sample::set(int x, int y) {
	a = x;
	b = y;
}
void sample::add(sample &cob2) {
	cob2.a = 12;
	cob2.b = 13;
}
void sample::disres() {
	cout << a << b << endl;
}

int main() {
	sample ob1;
	ob1.set(2, 3);
	ob1.disres();
	ob1.add(ob1);
	ob1.disres();
	return 0;
}
