//============================================================================
// Name        : Cube.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int cube() {
	int  a=10, r;
	 r = 6 * a * a;
	return (r);
}
int main() {
	int z = cube();
	cout << "Length of the side of a cube is : " << z << endl; // prints !!!Hello World!!!
	return 0;
}
