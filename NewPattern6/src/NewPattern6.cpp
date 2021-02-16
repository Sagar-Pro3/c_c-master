//============================================================================
// Name        : NewPattern6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//ABCDE
//ABCD
//ABC
//AB
//A

#include <iostream>
using namespace std;
class name {
public:
	int line = 5;
	int charcount = 5;
	char value = 'A';
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= charcount; j++) {
				cout << value;
				value++;
			}
			cout<<endl;
			value='A';
			charcount--;
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
