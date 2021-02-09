//============================================================================
// Name        : Virtual.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class one {
public:
	void data() {
		cout << "This is the virtual function" << endl;
	}
	void get() {
		cout << "This is the get function" << endl;
	}
};
class two: public virtual one {
public:
	void data() {
		cout << "This is 2nd data function" << endl;
	}
	void get() {
		cout << "This is 2nd get function" << endl;
	}
};
int main() {
	one *o1;
	two t2;
	o1 = &t2;
	o1->get();
	o1->data();

	return 0;
}
