//============================================================================
// Name        : volume.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int vcube(int a) {
	int v = a * a * a;
	return (v);
}
int main() {
	int a;
	cout << "Enter the value of a : " << endl;
	cin >> a;
	int z = vcube(a);
	cout << "volume of a cube : " << z << endl; // prints !!!Hello World!!!
	return 0;
}
