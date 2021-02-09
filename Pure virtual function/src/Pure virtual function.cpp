//============================================================================
// Name        : Pure.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class sample1 {
public:
	virtual void s()=0;
};
class sample2: public sample1 {
public:
	void s() {
		cout << "this is pure virtual function" << endl;
	}
};
int main() {
	sample1 *s1;
	sample2 s2;
	s1 = &s2;
	s1->s();
	return 0;
}

