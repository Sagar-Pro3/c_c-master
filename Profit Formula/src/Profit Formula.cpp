//============================================================================
// Name        : Profit.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void profit(int a, int b) {
	int profit;
	profit = a - b;
	cout << "Profit is : " << profit << endl;
}
int main() {


	profit(45,20);
}
