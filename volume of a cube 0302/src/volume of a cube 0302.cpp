//============================================================================
// Name        : volume.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int vcube() {
	int v, a = 3;
	v = a * a * a;
	return (v);
}
int main() {
	int v = vcube();
	cout << "volume of a cube : " << v << endl; // prints !!!Hello World!!!
	return 0;
}
