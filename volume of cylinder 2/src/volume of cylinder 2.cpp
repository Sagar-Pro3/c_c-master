//============================================================================
// Name        : volume.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void cylinder();
void cylinder(float r, float h) {
	float volume_of_cylinder;
	volume_of_cylinder=3.14*r*r*h;
	cout << "volume of cylinder is : " << volume_of_cylinder << endl;
}
int main() {
	cylinder(2, 5);
}
