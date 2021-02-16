//============================================================================
// Name        : NewPattern9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//EEEEE
// DDDD
//  CCC
//   BB
//    A

#include <iostream>
using namespace std;
class name {
public:
	int line = 5;
	int space = 0;
	int charcount = 5;
	char value = 'E';
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int k = 1; k <= charcount; k++) {
				cout << value;
			}
			cout << endl;
			charcount--;
			space++;
			value--;
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
