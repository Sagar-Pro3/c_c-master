//============================================================================
// Name        : MyPattern13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//A
//AB
//ABC
//ABCD
#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int charvalue = 1;
	char value = 'A';
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= charvalue; j++) {
				cout << value;
				value++;
			}
			cout << endl;
			charvalue++;
			value = 'A';

		}
	}
};
int main() {
	name n1;
	n1.fun();
	return 0;
}
