//============================================================================
// Name        : NewPattern3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//   1
//  2 2
// 3 3 3
//4 4 4 4

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int space = 3;
	int numcount = 1;
	int num = 1;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int k = 1; k <= numcount; k++) {
				cout << num<<" ";

			}
			cout << endl;
			num++;
			space-=1;
			numcount+=1;
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
