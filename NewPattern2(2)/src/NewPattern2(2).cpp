//============================================================================
// Name        : NewPattern2(2).cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//   A
//  C C
// E E E
//G G G G

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int space = 3;
	int charcount = 1;
	char value = 'A';
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int k = 1; k <= charcount; k++) {
				cout << value << " ";
			}
			cout << endl;

			charcount += 1;
			space -= 1;
			value += 2;

		}
	}
};
int main() {
	name n1;
	n1.fun();
	cout << "" << endl; // prints
	return 0;
}
