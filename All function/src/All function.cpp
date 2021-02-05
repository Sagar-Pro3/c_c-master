//============================================================================
// Name        : All.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
void funtion1();
int funtion2();
void funtion3(int a, int b);
int funtion4(int a, int b);
using namespace std;
class demo {
public:
	void funtion1() {
		cout << "No argu no return";
	}

	int funtion2() //- no argu but return value
	{
		int c = 10;
		return c;
	}

	void funtion3(int a, int b) // argu but no return value
			{
		int c;
		c = a + b;
		cout << "Addition fun 3 : " << c;
	}

	int funtion4(int a, int b) {
		int c;
		c = a + b;
		return c;

	}
};

int m;
int main() {

	demo d1;
	d1.funtion1();
	cout<<endl;
	int m = d1.funtion2();
	cout << "Reterun value : " << m << endl;
	d1.funtion3(10, 20);
	cout<<endl;
	int r = d1.funtion4(100, 100);
	cout << "Add value : " << r << endl;

}
