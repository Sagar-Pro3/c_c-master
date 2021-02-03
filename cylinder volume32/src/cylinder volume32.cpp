//============================================================================
// Name        : cylinder.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
float cylinder_Volume(float r, float h) {
	float v = 3.14 * r * r * h;
	return (v);
}
int main() {
	int r, h;
	cout << "Enter the radius of the circular base : " << endl; // prints !!!Hello World!!!
	cin >> r;
	cout << "Enter the Height of cylinder : " << endl; // prints !!!Hello World!!!
	cin >> h;
	float z = cylinder_Volume(r, h);
	cout << "Volume of cylinder : " << z << endl;
	return 0;
}
