//============================================================================
// Name        : sub32.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int sub(int a, int b) {
	int c = a - b;
	return (c);
}
int main() {
	int a = 5, b = 3;
	int s = sub(a, b);
	cout << "The sub value is : " << s << endl; // prints !!!Hello World!!!
	return 0;
}
