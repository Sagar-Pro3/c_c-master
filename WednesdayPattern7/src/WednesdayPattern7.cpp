//============================================================================
// Name        : WednesdayPattern7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
   1
  121
 12321
1234321
*/

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int space = 3;
	int numcount = 1;
	int num = 1;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int j = 1; j <= i; j++) {
				cout << j;
			}
			for (int j = i - 1; j >= 1; j--) {
				cout << j;
			}
			cout << endl;
			space--;
			//numcount--;
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
