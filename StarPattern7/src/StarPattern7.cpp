//============================================================================
// Name        : StarPattern7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//*
//**
//***
//**
//*

#include <iostream>
using namespace std;
class name {
public:

	int line = 5;
	int starcount = 1;
	int mid = ((line + 1) / 2);
	void fun() {
		for (int i = 1; i <= line; i++) {
			for (int j = 1; j <= starcount; j++) {
				cout << "*";
			}
			cout<<endl;
			if (i < mid) {
				starcount++;
			} else {
				starcount--;
			}
		}
	}

private:
};
int main() {
	name n1;
	n1.fun();
	cout << "" << endl; // prints 
	return 0;
}
