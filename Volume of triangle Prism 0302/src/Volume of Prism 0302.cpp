//============================================================================
// Name        : Volume.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int vtprism() {
	int v, b = 3, h = 4, l = 6;
	v = 0.5 * b * l * h;
	return (v);
}
int main() {
	int a = vtprism();
	cout << "volume of a Triangle Prism : " << a << endl; // prints !!!Hello World!!!
	return 0;
}
