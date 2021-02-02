//============================================================================
// Name        : Area.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void fun(float r,int area_circle);
void fun(float r,int area_circle){
	area_circle=3.14*r*r;
	cout << "Area of circle " <<area_circle << endl;
}
int main() {
	// prints !!!Hello World!!!
	fun(12.5,12);
	return 0;
}
