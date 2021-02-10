//============================================================================
// Name        : MyPattern1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//*****
//*****
//*****
#include <iostream>
using namespace std;
class name {
public:
	int line = 3;
	int starcount = 5;
	void fun() {
		for (int i = 1; i <=line; i++) {
			for (int j = 1; j <=starcount; j++) {
				cout << "*";

			}
			cout << endl;
		}
	}
};
int main() {
	name n1;
	n1.fun();
	return 0;
}

