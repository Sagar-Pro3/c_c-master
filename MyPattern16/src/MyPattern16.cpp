//============================================================================
// Name        : MyPattern16.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//12345
//1234
//123
//12
//1
#include <iostream>
using namespace std;
class name {
public:
	int line = 5;
	int numcount = 5;
	int num = 1;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= numcount; j++) {
				cout << num;
				num++;
			}
			cout<<endl;
			numcount--;
			num=1;
		}
	}
};
int main() {
	name n1;
	n1.fun();
	return 0;
}
