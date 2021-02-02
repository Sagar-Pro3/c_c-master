//============================================================================
// Name        : Area.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void rectangle(int b,int l);
void rectangle(int b,int l){
int areaofrectangle;
areaofrectangle=b*l;
cout<<"area of rectangle is : "<<areaofrectangle<<endl;
}
int main() {
	rectangle(500,300);
}
