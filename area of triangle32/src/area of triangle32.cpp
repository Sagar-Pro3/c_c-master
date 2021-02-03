//============================================================================
// Name        : area.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int triangle(int b, int h) {
	int z = 0.5 * b * h;
	return (z);
}
//12 5
int main() {
	int x, y;
	cout << "Enter the base of the triangle : " << endl; // prints !!!Hello World!!!
	cin >> x;
	cout << "Enter the height of the triangle : " << endl; // prints !!!Hello World!!!
	cin >> y;
	int p = triangle(x, y);
	cout << "Area of Triangle is : " << p << endl;
	return 0;
}
