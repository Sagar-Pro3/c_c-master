//============================================================================
// Name        : StarPattern9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//  *
// ***
//*****
// ***
//  *

#include <iostream>
using namespace std;
class name {
public:
	int line = 5;
	int space = 2;
	int mid = ((line + 1) / 2);
	int starvalue = 1;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int k = 1; k <= starvalue; k++) {
				cout << "*";
			}
			cout << endl;
			if (i < mid) {
				space--;
				starvalue += 2;
			} else {
				space++;
				starvalue -= 2;
			}
		}
	}

private:
};
int main() {
	name n1;
	n1.fun();
	cout << "" << endl; // prints 
	return 0;
}
