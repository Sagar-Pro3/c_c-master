//============================================================================
// Name        : area.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
float circle(float r) {
	float z = 3.14 * r * r;
	return (z);
}
int main() {
	float a;
	cout << "Enter the radius of the circle : " << endl; // prints !!!Hello World!!!
	cin >> a;
	float x = circle(a);
	cout << "The radius of the circle : " << x << endl;
	return 0;
}
