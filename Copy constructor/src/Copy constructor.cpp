//============================================================================
// Sample        : Copy.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Sample {
private:
	int item1, item2;
public:
	Sample(int n1, int n2) {
		item1 = n1;
		item2 = n2;
	}
	Sample(const Sample &n) {
		item1 = n.item1;
		item2 = n.item2;
	}
	void show() {
		cout << "item1 : " << item1 << endl;
		cout << "item2 : " << item2 << endl;
	}
};
int main() {
	Sample obj1(10,20);
	Sample obj2=obj1;
	obj1.show();
	obj2.show();

	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
