//============================================================================
// Name        : MyPattern6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//55555
//44444
//33333
//22222
//11111
#include <iostream>
using namespace std;
class name {
public:
	int line = 5;
	int numcount = 5;
	int num = 5;

	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= numcount; j++) {
				cout << num;

			}
			cout<<endl;
			num--;
		}
	}
};
int main() {
	name n1;
	n1.fun();
	return 0;
}
