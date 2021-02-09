#include <iostream>
using namespace std;
class student {
public:
	int id;
	string name;
	string add;
	void set() {
		cout << "Enter id : ";
		cin >> id;
		cout << "Enter name : ";
		cin >> name;
		cout << "Enter address : ";
		cin >> add;
		cout << "------------------------" << endl;
	}

	void dis() {
		cout << name << " your id is : " << id << endl;
		cout << "your name is : " << name << endl;
		cout << "your address is : " << add << endl;
		cout << "------------------------" << endl;
	}
};
class exam:  public virtual student {
public:
	string paper1;
	string paper2;
	void setpaper() {
		cout << "Your 1st paper : ";
		cin >> paper1;
		cout << "Your 2nd paper : ";
		cin >> paper2;
		cout << "------------------------" << endl;
	}
	void dispaper() {
		cout << "Your 1st paper is : " << paper1 << endl;
		cout << "Your 2nd paper is : " << paper2 << endl;
		cout << "------------------------" << endl;
	}
};
class sport : public virtual  student{
public:
	//string sport1, sport2;
	int marks1, marks2, marks3;
	void setmarks() {
/*		cout << "1st Sport is : ";
		cin >> sport1;
		cout << "2nd Sport is : ";
		cin >> sport2;*/
		cout << "1st Sport marks is : ";
		cin >> marks1;
		cout << "2nd Sport marks is : ";
		cin >> marks2;
		cout << "------------------------" << endl;
	}
	void dismarks() {
		marks3 = marks1 + marks2;
		cout << "Sport marks is : " << marks3 << endl;
		cout << "------------------------" << endl;
	}
};
class result: public exam, public sport {
public:
	int total;
	void totalmarks() {
		cout << "Total marks is : " << total << endl;
	}
};
int main() {
	student s1;
	s1.set();
	s1.dis();

	exam e1;
	e1.setpaper();
	e1.dispaper();
	e1.set();
	e1.dis();
	/*e1.setpaper();
	e1.dispaper();*/

	sport sport;
	sport.setmarks();
	sport.dismarks();

	result r1;
	r1.setpaper();
	r1.dispaper();
	r1.setmarks();
	r1.dismarks();
	r1.totalmarks();
	return 0;
}
