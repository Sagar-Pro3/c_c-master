//============================================================================
// Name        : Object.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Shop {
public:
	double price1, price2;

private:
};
Shop createStudent() {
	Shop Shop;
	Shop.price1 = 10;
	Shop.price2 = 20;
	cout << "Price of product 1 is : " << Shop.price1 << endl;
	cout << "Price of product 2 is : " << Shop.price2 << endl;

	return Shop;
}
int main() {
	Shop Shop;
	Shop=createStudent();
	return 0;
}
