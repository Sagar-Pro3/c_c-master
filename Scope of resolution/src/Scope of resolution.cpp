//============================================================================
// Name        : Scope.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int x = 20; //global
int main() {
	int x = 10; //local
	cout << "Value of global x is : " << ::x << endl;
	cout << "Value of local x is : " << x << endl;
	return 0;
}
