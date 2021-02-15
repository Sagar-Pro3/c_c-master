//============================================================================
// Name        : Alphabet1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//AAAAA
//AAAAA
//AAAAA
//AAAAA
//AAAAA

#include <iostream>
using namespace std;
class name {
public:
	int line = 5;
	int charvalue = 5;
	char value = 'A';
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= charvalue; j++) {
				cout << value;
			}
			cout << endl;
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
