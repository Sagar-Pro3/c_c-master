//============================================================================
// Name        : MyPattern2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class name {
public:
	int line = 4;
	int count = 4;
	int num = 1;
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= count; j++) {
				cout << num;
			}
			cout << endl;
			num++;

		}
	}

private:
};
int main() {
	name n1;
	n1.fun();
	return 0;
}
