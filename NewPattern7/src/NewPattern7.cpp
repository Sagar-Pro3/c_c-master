//============================================================================
// Name        : NewPattern7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//55555
// 4444
//  333
//   22
//    1

#include <iostream>
using namespace std;
class name {
public:
	int line = 5;
	int sapce = 0;
	int numvalue = 5;
	int num = 5;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= sapce; j++) {
				cout << " ";
			}
			for (int k = 1; k <= numvalue; k++) {
				cout << num;

			}
			cout << endl;
			numvalue--;
			num--;
			sapce++;
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
