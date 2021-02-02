//============================================================================
// Name        : Function2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//function with outaregument and no return type
#include <iostream>
using namespace std;
float r, area_circle;
void fun();
void fun(){
area_circle=3.14*r*r;
cout<<"Area of circle is:"<<area_circle<<endl;
}
int main(){
	cout<<"Enter area of circle";
	cin>>r;
	fun();

}
