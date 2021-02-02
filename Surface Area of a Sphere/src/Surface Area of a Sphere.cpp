//============================================================================
// Name        : Surface.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void surface_of_sphere() {
	int r,s;
	cout << "Enter the Radius of Sphere : " << endl;
	cin >> r;
	s=4*3.14*r*r;
	cout<<"Radius of Sphere is : "<<s<<endl;
}
int main() {
	surface_of_sphere();
}
