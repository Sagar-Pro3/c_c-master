//============================================================================
// Name        : Time.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class name {
	//int second,minute,hour;
public:
	int h1, m1, s1;
	int h2, m2, s2;
	int h, m, s;

	void getdata() {
		cout << "Enter 1st time" << endl;
		cout << "Hour : " ;
		cin >> h1;
		cout << "Minute : " ;
		cin >> m1;
		cout << "Second : " ;
		cin >> s1;

		cout << "----------------" << endl;

		cout << "Enter 2nd time" << endl;
		cout << "Hour : " ;
		cin >> h2;
		cout << "Minute : " ;
		cin >> m2;
		cout << "Second : " ;
		cin >> s2;
	}
	void add() {
		s = s1 + s2;
		m = m1 + m2 + (s / 60);
		h = h1 + h2 + (m / 60);
		m = m % 60;
		s = s % 60;
	}
	void display() {
		cout << "Total Time is: " << h << " : " << m << " : " << s << endl;
	}
};
int main() {
	name n1;
	n1.getdata();
	n1.add();
	n1.display();
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
