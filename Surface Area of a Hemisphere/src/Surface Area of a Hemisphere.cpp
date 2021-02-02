//============================================================================
// Name        : Surface.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//void hemisphere(int r);
void hemisphere(float r) {
	float s;
	s = 3 * 3.14 * r * r;
	cout << "Surface Area of a Hemisphere is : " << s << endl;
}
int main() {
	hemisphere(10);
}
