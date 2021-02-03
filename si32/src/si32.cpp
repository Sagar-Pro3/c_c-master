//============================================================================
// Name        : si32.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int si(int p, int r, int t) {
	int si = p * r * t / 100;
	return (si);
}
int main() {
	int p, r, t;
	cout << "Enter Principal Amount : " << endl; // prints !!!Hello World!!!
	cin >> p;
	cout << "Enter Rate of Interest per annum : " << endl; // prints !!!Hello World!!!
	cin >> r;
	cout << "Enter Time in years : " << endl; // prints !!!Hello World!!!
	cin >> t;
	int s = si(p, r, t);
	cout << "Simple Interest Is : " << s << endl;
	return 0;
}
