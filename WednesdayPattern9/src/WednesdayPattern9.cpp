//============================================================================
// Name        : WednesdayPattern9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//*******
// *****
//  ***
//   *

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int space = 0;
	int starcount = 7;
	int star = 1;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int k = 1; k <= starcount; k++) {
				cout << "*";
			}
			cout<<endl;
			star++;
			space++;
			starcount-=2;
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
