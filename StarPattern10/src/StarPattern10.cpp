//============================================================================
// Name        : StarPattern10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//*    *
//**  **
//******
//**  **
//*    *


#include <iostream>
using namespace std;
class name {
public:
	int line = 5;
	int star = 1;
	int space = 4;
	int mid = ((line + 1) / 2);
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= star; j++) {
				cout << "*";
			}
			for (int k = 1; k <= space; k++) {
				cout << " ";
			}
			for (int l = 1; l <= star; l++) {
				cout << "*";
			}
			cout << endl;
			if (i < mid) {
				space -= 2;
				star++;
			} else {
				space += 2;
				star--;
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
