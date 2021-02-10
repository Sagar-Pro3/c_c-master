//============================================================================
// Name        : Operator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C-, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class name {

public:

	name() :
			num(2) {
	}
	void operator -() {
		num = num - 1;
	}
	void show() {
		cout << "This is operator overloading " << num << endl;
	}
private:
	int num;

};
int main() {
	name n1;
	-n1;
	n1.show();
	return 0;
}
