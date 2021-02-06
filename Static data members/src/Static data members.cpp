//============================================================================
// Name        : Static.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class student {
private:
	int roll_no;
	char name[50];
	int marks;
public:
	static int count;
	student() {
		count++;
	}

	void getdata() {
		cout << "Enter student roll_no : " << endl;
		cin >> roll_no;
		cout << "Enter student name : " << endl;
		cin >> name;
		cout << "Enter student marks : " << endl;
		cin >> marks;
	}
	void setdata() {
		cout << "Enter student roll_no : " << roll_no << endl;
		cout << "Enter student name : " << name << endl;
		cout << "Enter student marks : " << marks << endl;
	}
};
int student::count = 0;
int main(void) {
	student s1, s2;
	s1.getdata();
	s1.setdata();
	s2.getdata();
	s2.setdata();
	cout << "Total student is : " << student::count;
	return 0;
}
