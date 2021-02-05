//============================================================================
// Name        : Friend.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
// class A create kela
class A {
	int x = 10;
	friend class B;
};
// class B create kela
class B {
public:
	void display(A &a) {
		cout << "The value is : " << a.x;
	}
};
int main() {
	A a; //class A cha object small a aahe
	B b; //class B cha object small b aahe
	b.display(a); // small b ha class B cha object aahe tay la gheun(b.display(a)) display method la call kela
	return 0;
}
