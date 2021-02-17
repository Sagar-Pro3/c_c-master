//============================================================================
// Name        : WednesdayPattern1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//   1
//  123
// 12345
//1234567

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int numcount = 1;
	int num = 1;
	int space = 3;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int k = 1; k <= numcount; k++) {
				cout << num;
				num++;
			}
			cout << endl;
			space--;
			num=1;
			numcount +=2;
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
