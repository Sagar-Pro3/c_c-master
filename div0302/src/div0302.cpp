//============================================================================
// Name        : div0302.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int div() {
	int x = 10, y = 5;
	int r = x / y;
	return (r);
}
int main() {
	int r = div();
	cout << "The division is : " << r << endl; // prints !!!Hello World!!!
	return 0;
}
