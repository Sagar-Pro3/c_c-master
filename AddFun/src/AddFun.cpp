//============================================================================
// Name        : AddFun.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;
void add(int x, int y);
int main() {
	add(20, 20);
	//getch();

}
void add(int x, int y) {
	int result;
	result = x + y;
	cout << "Sum of " << x << " and " << y << " is " << result << endl;
}

