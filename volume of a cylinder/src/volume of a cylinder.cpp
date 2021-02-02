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
void cylinder(){
	float r,h,volume_of_cylinder;
	cout<<"Enter the radius"<<endl;
	cin>>r;
	cout<<"Enter the height"<<endl;
	cin>>h;
	volume_of_cylinder=3.14*r*r*h;
	cout<<"Volume of cylinder is : "<<volume_of_cylinder;
}
int main() {
	cylinder();
}
