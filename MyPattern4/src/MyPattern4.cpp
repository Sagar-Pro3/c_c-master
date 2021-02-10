//============================================================================
// Name        : MyPattern4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//AAAA
//BBBB
//CCCC
//DDDD
//EEEE

#include <iostream>
using namespace std;
class name {
public:
	int line = 5;
	int charcount = 4;
	char value = 'A';
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= charcount; j++) {
				cout << value;
			}
			cout<<endl;
			value++;
		}
	}
};
int main() {
	name n1;
	n1.fun();
	return 0;
}
