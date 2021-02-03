//============================================================================
// Name        : volume.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int vcuboid(int l, int b, int h) {
	int v = l * b * h;
	return (v);
}
int main() {
	int l, b, h;
	cout << "Enter l value : " << endl;
	cin >> l;
	cout << "Enter b value : " << endl;
	cin >> b;
	cout << "Enter h value : " << endl;
	cin >> h;
	int z = vcuboid(l, b, h);
	cout << "volume of cuboid : " << z << endl; // prints !!!Hello World!!!
	return 0;
}
