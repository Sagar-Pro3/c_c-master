//============================================================================
// Name        : Mod.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int mod() {
	int x = 4, y = 4;
	int z = x % y;
	return (z);
}
int main() {
	int m = mod();
	cout << "The mod value is : " << m << endl; // prints !!!Hello World!!!
	return 0;
}
