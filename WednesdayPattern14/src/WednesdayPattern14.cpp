//============================================================================
// Name        : WednesdayPattern14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//3
//3 2
//3 2 1
//3 2 1 0
//3 2 1
//3 2
//3

#include <iostream>
using namespace std;
class name {
public:
	int line = 7;
	int numcount = 1;
	int num = 3;
	int mid = ((line + 1) / 2);
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= numcount; j++) {
				cout << num << " ";
				num--;
			}
			cout << endl;

			if (i < mid) {
				numcount++;
			} else {
				numcount--;
			}

			num = 3;
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
