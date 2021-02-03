//============================================================================
// Name        : add32.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int sum(int a,int b)
{
	int c=a+b;
	return(c);
}
int main() {
	int a=2,b=3;
	int r=sum(a,b);
	cout << "Sum is : " <<r<< endl;
	return 0;
}
