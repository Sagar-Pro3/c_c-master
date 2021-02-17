//============================================================================
// Name        : WednesdayPattern12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//ABCDEFG
// ABCDE
//  ABC
//   A

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int space = 0;
	int charcount = 7;
	char value = 'A';
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= space; j++) {
				cout << " ";
			}
			for (int k = 1; k <= charcount; k++) {
				cout <<value;
				value++;
			}
			cout<<endl;
			value='A';

			space++;
			charcount-=2;
		}
	}

private:
}
;
int main() {
	name n1;
	n1.fun();
	cout << "" << endl; // prints 
	return 0;
}
