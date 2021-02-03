//============================================================================
// Name        : Simple.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int SI() {
	int amt = 50000, r = 5, t = 3;
	int z = (amt * r * t) / 100;
	return (z);
}
int main() {
	int r = SI();
	cout << "The SI is : " << r << endl;
	return 0;
}
