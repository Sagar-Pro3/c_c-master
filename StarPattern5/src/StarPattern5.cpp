//============================================================================
// Name        : StarPattern5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//*****
// ****
//  ***
//   **
//    *

#include <iostream>
using namespace std;
class name {
public:
	int line = 5;
	int space = 0;
	int star = 5;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int k = 1; k <= star; k++) {
				cout << "*";
			}
			cout << endl;
			space++;
			star--;
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
