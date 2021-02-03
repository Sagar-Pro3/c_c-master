//============================================================================
// Name        : cube32.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int cube(int a) {
	int s;
	s = 6 * a * a;
	return (s);
}
int main() {
	int x;
	cout << "Enter the Length of the side of a cube : " << endl;
	cin >> x;
	int z = cube(x);
	cout << "Length of the side of a cube : " << z << endl; // prints !!!Hello World!!!
	return 0;
}
