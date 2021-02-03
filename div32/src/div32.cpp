//============================================================================
// Name        : div32.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int division(int a, int b) {
	int z = a / b;
	return (z);
}
int main() {
	int x, y;
	cout << "Enter a value : " << endl; // prints !!!Hello World!!!
	cin >> x;
	cout << "Enter b value : " << endl; // prints !!!Hello World!!!
	cin >> y;
	int r = division(x, y);
	cout << "Div value is : " << r << endl;
	return 0;
}
