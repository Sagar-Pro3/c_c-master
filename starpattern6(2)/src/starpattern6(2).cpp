//============================================================================
// Name        : starpattern6(2).cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class name {
public:
	int line = 5;
	int starcount = 9;
	int spacecount = 0;

	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= spacecount; j++) {
				cout << " ";
			}
			for (int k = 1; k <= starcount; k++) {
				cout << "*";
			}
			cout << endl;
			starcount -= 2;
			spacecount++;
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
