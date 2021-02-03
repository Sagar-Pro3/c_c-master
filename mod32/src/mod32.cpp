//============================================================================
// Name        : mod32.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int bike(int a, int b) {
	int v = a % b;
	return (v);
}
int main() {
	int x, y;
	cout << "Enter value of x : " << endl; // prints !!!Hello World!!!
	cin >> x;
	cout << "Enter value of y : " << endl; // prints !!!Hello World!!!
	cin >> y;
	int v = bike(x, y);
	cout << "The mod value is : " << v << endl;
	return 0;
}
