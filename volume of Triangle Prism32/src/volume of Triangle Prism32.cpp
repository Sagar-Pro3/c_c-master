//============================================================================
// Name        : volume.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int Triangle_Prism(int l, int b, int h) {
	int v = 0.5 * l * b * h;
	return (v);
}
int main() {
	int l, b, h;
	cout << "Enter the value of l : " << endl;
	cin >> l;
	cout << "Enter the value of b : " << endl;
	cin >> b;
	cout << "Enter the value of h : " << endl;
	cin >> h;
	int z = Triangle_Prism(l, b, h);
	cout << "volume of triangle prism : " << z << endl; // prints !!!Hello World!!!
	return 0;
}
