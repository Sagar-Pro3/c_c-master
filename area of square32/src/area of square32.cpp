//============================================================================
// Name        : area.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int asquare(int a) {
	int x = a * a;
	return (x);
}
int main() {
	int y;
	cout << "Enter side of the square : " << endl;
	cin >> y;
	int z = asquare(y);
	cout << "Area of Square : " << z << endl;
	return 0;
}
