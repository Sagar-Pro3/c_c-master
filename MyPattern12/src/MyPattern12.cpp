//============================================================================
// Name        : MyPattern12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//1
//22
//333
//4444

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int numbercount = 1;
	int num = 1;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= numbercount; j++) {
				cout << num;
			//
			}
			cout<<endl;
			num++;
			numbercount++;
		}
	}
};
int main() {
	name n1;
	n1.fun();
	return 0;
}
