//============================================================================
// Name        : Product array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//const char item = 'n';
const int item = 2;
class shop {
	//int item_id;
	int price[item];
	//int total;
public:
	void data();
	void total();
};

void shop::data() {
	/*cout << "Enter item_id " << endl;
	cin >> item_id;*/
	for (int i = 0; i < item; i++) {
		cout << "Enter price of item" << i + 1 << ":";
		cin >> price[i];
	}
}

void shop::total() {
	int total = 0;
	for (int i = 0; i < item; i++) {
		 total= total+ price[i];

	}
	cout << "All Price is : " << total;
}
int main() {
	shop s1;
	s1.data();
	s1.total();
	return 0;
}

