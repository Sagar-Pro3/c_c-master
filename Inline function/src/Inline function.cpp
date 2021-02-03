//============================================================================
// Name        : Inline.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
inline void add(int a, int b) {
	int c;
	c = a + b;
	cout << "Sum of " << a << " and " << b << " is : " << c << endl;
}
int main() {
	add(10, 20);
	return 0;
}
