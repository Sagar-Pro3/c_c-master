//============================================================================
// Name        : Student.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//const int size = 5;
class student {

public:
	int a, m_marks;
	string n_name;

	void show() {
		//cout << "Enter roll number : " << endl;
		cin >> a;
	}
	void name() {
		//cout << "Enter name : " << endl;
		cin >> n_name;
	}
	void marks() {
		//cout << "Enter name : " << endl;
		cin >> m_marks;
	}
	void display() {
		cout << "Student roll no : " << a << endl;
		cout << "Student name : " << n_name << endl;
		cout << "Student marks : " << m_marks << endl;
		cout << "--------------------------------" << endl;
	}

};

int main() {
	student s[100];
	for (int i = 0; i < 1; i++) {
		//cout << "Student : " << 1 + i << endl;
		cout << "Enter student roll no : ";
		s[i].show();
		cout << "Enter student name : ";
		s[i].name();
		cout << "Enter student marks : ";
		s[i].marks();
		cout << "--------------------------------" << endl;
	}
	for (int i = 0; i < 1; i++) {
		cout << "Student id: " << 0 + 1 + i << endl;
		s[i].display();
	}
	/*student s1;
	 s1.show();
	 s1.rollno();
	 s1.display();*/

	cout << " " << endl;
	return 0;
}

