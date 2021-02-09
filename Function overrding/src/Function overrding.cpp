//============================================================================
// Name        : Function.cpp
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
		cout << "this is class one data function " << endl;
	}
	void dis() {
		cout << "this is class one dis function " << endl;
	}
};
class two : public one {
public:
	void data() {
		cout << "this is class two data function " << endl;
	}
	void dis() {
		one::data();
		cout << "this is class two dis function " << endl;
	}
};
int main() {


	two t2;
	t2.dis();
	return 0;
}
