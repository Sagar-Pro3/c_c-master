//============================================================================
// Name        : Loss.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void loss() {
	int cp, sp,loss;
	cout << "Enter C.P : " << endl;
	cin >> cp;
	cout << "Enter S.P : " << endl;
	cin >> sp;
	loss=cp-sp;
	cout<<"Loss amt is : "<<loss<<endl;
}
int main() {
	loss();
}
