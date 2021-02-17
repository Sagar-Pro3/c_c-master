//============================================================================
// Name        : classtemplates1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template<class t>
class name {
	t a, b, c;
public:

	void fun() {
		cout << "Enter the number";
		cin >> a >> b;
	}
	void add() {
		c = a + b;
	}
	void dis(char st[]) {

		cout << st << " " << c;
	}
};
int main() {
	name<int> n1;
	n1.fun();
	n1.add();
	n1.dis("inteaddition");
	cout << endl;
	name<float> n2;
	n2.fun();
	n2.add();
	n2.dis("floataddition");
	return 0;
}
