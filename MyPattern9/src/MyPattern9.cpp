//============================================================================
// Name        : MyPattern9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int charcount = 5;
	char value = 'E';
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= charcount; j++) {
				cout << value;
				value--;
			}
			cout<<endl;
			value='E';
		}
	}
};
int main() {
	name n1;
	n1.fun();
	return 0;
}
