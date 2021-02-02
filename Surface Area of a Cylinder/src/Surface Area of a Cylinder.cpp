//============================================================================
// Name        : Surface.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void surface_of_cylinder(int b, int h,int r) {
	int s;
	s=2*3.14*r*(r+h);
	cout<<"surface_of_cylinder is : "<<s<<endl;

}
int main() {
	surface_of_cylinder(10,10,10);
}
