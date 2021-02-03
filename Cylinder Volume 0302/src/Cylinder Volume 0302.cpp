//============================================================================
// Name        : Cylinder.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
float cylinder() {
	float v, r=2, h=5;
	v = 3.14 * r * r * h;
	return (v);
}
int main() {
	float z = cylinder();
	cout << "Cylinder Volume : " << z << endl; // prints !!!Hello World!!!
	return 0;
}
