//============================================================================
// Name        : With.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
class name_1 {
public:
	virtual void dis() {
		cout << "class name1";
	}
};
class name2: public name_1 {
public:
	void dis() {
		cout << "class name2";
	}
};
int main() {
	name_1 n1, *n1pt;
	n1pt = &n1;
	n1pt->dis();
	name2 n2;
	n1pt = &n2;
	n1pt->dis();
	return 0;
}

