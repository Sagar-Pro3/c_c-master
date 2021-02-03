//============================================================================
// Name        : area.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int rectangle(int l, int b) {
	int a = l * b;
	return (a);
}
int main() {
	int l, b;
	cout << "Enter the length of rectangle : " << endl; // prints !!!Hello World!!!
	cin >> l;
	cout << "Enter the breadth of rectangle : " << endl; // prints !!!Hello World!!!
	cin >> b;
	int z = rectangle(l, b);
	cout << "Area of rectangle is : " << z << endl;
	return 0;
}
