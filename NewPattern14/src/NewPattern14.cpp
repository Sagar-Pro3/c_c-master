//============================================================================
// Name        : NewPattern14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//  1
// 12
//123

#include <iostream>
using namespace std;
class name {
public:
	int line = 3;
	int space = 2;
	int numcount = 1;
	int num = 1;
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
			num=1;;
			numcount++;
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
