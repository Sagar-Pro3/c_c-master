//============================================================================
// Name        : WednesdayPattern8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//4444444
// 33333
//  222
//   1

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int numcount = 7;
	int space = 0;
	int num = 4;

	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int k = 1; k <= numcount; k++) {
				cout << num;
			}
			cout << endl;
			space++;
			num--;
			numcount-=2;
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
