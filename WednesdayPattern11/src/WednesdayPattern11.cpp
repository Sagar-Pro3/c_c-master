//============================================================================
// Name        : WednesdayPattern11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//1234567
// 12345
//  123
//   1

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int space = 0;
	int numcount = 7;
	int num = 1;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int k = 1; k <= numcount; k++) {
				cout <<num;
				num++;
			}
			cout<<endl;
			num=1;
			space++;
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
