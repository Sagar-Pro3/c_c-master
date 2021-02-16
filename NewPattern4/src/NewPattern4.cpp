//============================================================================
// Name        : NewPattern4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//   1
//  3 3
// 5 5 5
//7 7 7 7

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int space =3;
	int numcount = 1;
	int num = 1;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int k = 1; k <= numcount; k++) {
				cout <<num<<" ";
			}
			cout << endl;

			numcount += 1;
			space -= 1;
			num+=2;;

		}
	}
};
int main() {
	name n1;
	n1.fun();
	cout << "" << endl; // prints
	return 0;
}
