//============================================================================
// Name        : Simple.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int interest(float p, int n,float r) {
	return p * r * n / 100;
}
int main() {
	float amount, principal;
	int time;
	int interest(float p, int n, float r = 7);
	cout << "Please enter principal amount : " << endl;
	cin >> principal;
	cout << "Please enter Time: " << endl;
	cin >> time;
	amount = interest(principal, time);
	cout << amount;
	return 0;
}

