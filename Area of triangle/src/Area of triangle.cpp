//============================================================================
// Name        : Area.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<conio.h>
using namespace std;
float areaoftriangle, b, h;
void triangle();
void triangle() {

	cout << "Enter the value of base" << endl;
	cin >> b;
	cout << "Enter the value of height" << endl;
	cin >> h;
	areaoftriangle = 0.5 * b * h;
	cout << "Area of triangle is " << areaoftriangle << endl;
}
int main() {
	triangle();

}
