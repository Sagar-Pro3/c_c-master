//============================================================================
// Name        : Inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Father {
public:
	int home = 1;
	int money = 100;
};
class Son: public Father {
public:
	int money = 100;
	int bike = 2;
};
int main() {
	Son s1;

	cout << "Sons : " << s1.home << endl;
	cout << "Sons bike is : " << s1.bike << endl;

	return 0;
}
