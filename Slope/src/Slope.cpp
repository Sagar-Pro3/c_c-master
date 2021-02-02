//============================================================================
// Name        : Slope.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void slope(int y1, int y2, int x1, int x2);
void slope(int y1, int y2, int x1, int x2){
	int m;
	m=y2-y1/x2-x1;
	cout<<"The slope is : "<<m<<endl;

}
int main() {
	slope(7,8,10,15);
}
