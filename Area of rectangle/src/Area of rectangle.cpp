//============================================================================
// Name        : Area.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void rectangle();
int l, b,Area_of_rectangle;
void rectangle() {
	cout << "Enter length" << endl;
	cin >> l;
	cout << "Enter breadth" << endl;
	cin >> b;
	Area_of_rectangle=l*b;
	cout<<"Area of rectangle is : "<<Area_of_rectangle<<endl;
}
int main() {
	rectangle();

}
