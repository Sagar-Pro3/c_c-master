//============================================================================
// Name        : WednesdayPattern3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//   A
//  BBB
// CCCCC
//DDDDDDD


#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int charcount = 1;
	char value = 'A';
	int space = 3;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int k = 1; k <= charcount; k++) {
				cout << value;

			}
			cout << endl;
			space--;
			value++;
			charcount += 2;
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
