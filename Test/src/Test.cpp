//============================================================================
// Name        : Test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	//int charcount = 5;
	int numcount = 5;
	int num = 1;

	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= numcount; j++) {
				if (i == 2 || i == 4) {
					cout << num;
					num++;
				}
			}
			if (i == 1 || i == 3) {
				cout << "AbcDe";
			}
			cout << endl;
			num = 1;
		}

	}

};
int main() {
	name n1;
	n1.fun();
	cout << "" << endl; // prints
	return 0;
}
