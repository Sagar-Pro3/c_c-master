//============================================================================
// Name        : Basic Calculator switch case.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Demo {
public:
	void show() {
		cout << "Exit" << endl;
	}
	int add(int a, int b) {
		int c = a + b;
		return (c);
	}
	int sub(int a, int b) {
		int c = a - b;
		return (c);
	}
	int mul(int a, int b) {
		int c = a * b;
		return (c);
	}
	int div(int a, int b) {
		int c = a / b;
		return (c);
	}
	int mod(int a, int b) {
		int c = a % b;
		return (c);
	}
};
int main() {
	int a, b;
	int option;
	Demo d1;
	//d1.show;
	for (int i = 0; i < 6; i++) {
		cout << "Enter your Option" << endl;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cout << "5. Mod" << endl;
		cout << "6. Exit" << endl;
		cin >> option;
		cout << endl;

		switch (option) {
		case 1:
			cout << "Addition" << endl;
			cout << "Enter 1st number : ";
			cin >> a;
			cout << "Enter 2nd number : ";
			cin >> b;
			cout << "Addition of " << a << " + " << b << " is : " ;
			cout << d1.add(a, b);
			cout<<endl;
			cout<<"----------------------------------------------"<<endl;
			break;
		case 2:
			cout << "Subtraction" << endl;
			cout << "Enter 1st number : ";
			cin >> a;
			cout << "Enter 2nd number : ";
			cin >> b;
			cout << "Subtraction of " << a << " - " << b << " is : ";
			cout << d1.sub(a, b);
			cout<<endl;
			cout<<"----------------------------------------------"<<endl;
			break;
		case 3:
			cout << "Multiplication" << endl;
			cout << "Enter 1st number : ";
			cin >> a;
			cout << "Enter 2nd number : ";
			cin >> b;
			cout << "Multiplication of " << a << " * " << b << " is : ";
			cout << d1.mul(a, b);
			cout<<endl;
			cout<<"----------------------------------------------"<<endl;
			break;
		case 4:
			cout << "Division" << endl;
			cout << "Enter 1st number : ";
			cin >> a;
			cout << "Enter 2nd number : ";
			cin >> b;
			cout << "Division of " << a << " / " << b << " is : ";
			cout << d1.div(a, b);
			cout<<endl;
			cout<<"----------------------------------------------"<<endl;
			break;
		case 5:
			cout << "Mod" << endl;
			cout << "Enter 1st number : ";
			cin >> a;
			cout << "Enter 2nd number : ";
			cin >> b;
			cout << "Mod of " << a << " % " << b << " is : ";
			cout << d1.mod(a, b);
			cout<<endl;
			cout<<"----------------------------------------------"<<endl;
			break;
		case 6:
			d1.show();
			exit(0);
		default:
			cout << "Error" << endl;
			break;
		}
	}
	return 0;
}
