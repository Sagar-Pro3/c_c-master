//============================================================================
// Name        : multiplication32.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int mul(int a, int b) {
	int m = a * b;
	return (m);
}
int main() {
	int x, y;
	cout << "Enter value of x : " << endl;
	cin >> x;
	cout << "Enter value of y : " << endl;
	cin >> y;
	int r = mul(x, y);
	cout << "The multiplication is : " << r << endl; // prints !!!Hello World!!!
	return 0;
}
