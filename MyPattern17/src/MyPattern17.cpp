//============================================================================
// Name        : MyPattern17.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//Aaaaa
//Bbbbb
//Ccccc
#include <iostream>
using namespace std;
class name {
public:
	int line = 3;
	int charcount =4;
	char value1 = 'A';
	char value2 = 'a';
	void fun() {
		for (int i = 1; i <= line; i++) {
			cout << value1;
			for (int j = 1; j <= charcount; j++) {
				cout << value2;
			}
			cout<<endl;
			value1++;
			value2++;
		}
	}
};
int main() {
	name n1;
	n1.fun();
	return 0;
}
