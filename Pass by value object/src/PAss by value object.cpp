//============================================================================
// Name        : Pass.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Test {
	int num;
public:
	int add(int num) {
		num = num + 100;
		return num;
	}
};

int main() {
	Test d1;
	int num,result;
	num=10;
	cout<<"1st value is : "<<num<<endl;
	result=d1.add(num);
	cout<<"2nd value is : "<<num<<endl;
	cout<<"Result value is : "<<result<<endl;
	return 0;
}
