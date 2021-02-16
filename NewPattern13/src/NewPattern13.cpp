//============================================================================
// Name        : NewPattern13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//  *
// **
//***

#include <iostream>
using namespace std;
class name {
public:
	int line = 3;
	int starcount = 1;
	int star = 1;
	int space = 2;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int k = 1; k <= starcount; k++) {
				cout << "*";
			}
			cout<<endl;
			starcount++;
			space--;
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
