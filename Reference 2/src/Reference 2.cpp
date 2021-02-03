//============================================================================
// Name        : Reference.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void fun(int &x, int &y);
void fun(int &x, int &y) {
	x = 12;
	y = 14;
}
int main() {
	int a = 2;
	int b = 4;
	cout << a << " " << b << endl;
	fun(a, b);
	cout << a << " " << b << endl;
	return 0;
}
