//============================================================================
// Name        : Inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Grandfather {
public:
	int money = 50000;

};
class father: public Grandfather {
public:
	int money = 60000;

};
class son: public father {
public:
	int money = 70000;

};
int main() {
	Grandfather g1;
	cout << "Grand Father money is : " << g1.money << endl;
	father f1;
	cout << "Grand Father money is : " << g1.money << endl;
	cout << "Father money is : " << f1.money << endl;
	son s1;
	cout << "Grand father money is : " << s1.money << endl;
	cout << "Father money is : " << s1.money << endl;
	cout << "Son money is : " << s1.money << endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
