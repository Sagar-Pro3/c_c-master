//============================================================================
// Name        : Binarry.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Binarry_hw {
public:
	string name1, name2;
	void set(string x, string y) {
		name1 = x;
		name2 = y;
	}
	void operator-(Binarry_hw cb2) {
		string name3 = name1 + cb2.name1;
		string name4 = name2 + cb2.name2;
		cout << name3 << name4;
	}
	void dis() {
		cout << name1 << name2;
	}

};
int main() {
	Binarry_hw b1, b2;
	b1.set("Ram", "Sham");
	b2.set("Changu" ,"Mangu");
	b1.dis();
	b2.dis();
	return 0;
}
