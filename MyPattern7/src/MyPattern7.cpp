//============================================================================
// Name        : MyPattern7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//54321
//54321
//54321
//54321

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int numcount = 5;
	int value = 5;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= numcount; j++) {
				cout << value;
				value--;
			}
			cout << endl;
			value = 5;
		}
	}
};
int main() {
	name n1;
	n1.fun();
	return 0;
}
