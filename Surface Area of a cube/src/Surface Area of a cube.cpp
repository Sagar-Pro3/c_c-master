//============================================================================
// Name        : Surface.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void surface() {
	int a,surface_area_of_cube;
	cout << "Enter the side of cube : " << endl;
	cin >> a;
	surface_area_of_cube=6*a*a;
	cout<<"surface_area_of_cube is : "<<surface_area_of_cube<<endl;

}
int main() {
	surface();
}
