#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
#include<string.h>
//#include<process.h>

using namespace std;
class name {
public:
	int option, password, answer, marks = 0, totalmarks = 15;
	int c = 0;
	string name, lname, fname, email, fname2, lname2, email1;
	char ch;
	int i;
	int x, y;
	char usr[10] = "admin";
	char pass[10] = "123";
	char us[10];
	char pas[10];
	int ob;
	ifstream fin;
	ofstream fout;
	int choice;
	int size = sizeof(name);
	void line() {
		cout << "\n";
		for (int i = 1; i < 80; i++)
			cout << "-";
		cout << endl;
	}

	void login() {
		for (int i = 1; i <= 2; i++) {
			cout << "1.Login" << endl;
			cout << "2.Create acount" << endl;
			cout << "Enter option -  ";
			cin >> option;
			cout << endl;

			switch (option) {
			case 1:
				cout << "Enter admin name: ";
				cin >> us;
				cout << "Enter admin password: ";

				for (; ch != '\r';) {
					ch = getch();
					pas[c] = ch;
					c++;
					cout << "*";
				}
				cout << endl;
				c = c - 1;
				pas[c] = '\0';
				// cout("%s",pas);
				x = strcmp(us, usr);
				y = strcmp(pas, pass);
				if ((x == 0) && (y == 0)) {
					cout << "login successful" << endl;
					line();
					cout << "Enter your first name - ";
					cin >> fname2;
					cout << "Enter your last name - ";
					cin >> lname2;
					cout << "Enter your email - ";
					cin >> email1;

					for (int i = 1; i < 8; i++) {
						cout << endl;
						cout << "******Choose your option******" << endl;
						cout << endl;
						cout << "1. Display questions." << endl;
						cout << "2. Display corretanswer." << endl;
						cout << "3. Display tatal marks." << endl;
						cout << "4. Display result." << endl;
						cout << "5. Exit ." << endl;
						cout << "Enter your option -  ";
						cin >> option;
						cout << endl;
						switch (option) {
						case 1:
							//q1

							cout
									<< "Q1.Which types of arrays are always considered as linear arrays?"
									<< endl;
							cout << "1. Single - dimensional." << endl;
							cout << "2. void virtual f()=0 { }." << endl;
							cout << "3. virtual void f() {} = 0;." << endl;
							cout << "4. None of the above." << endl;
							cout << "Enter your option -  ";
							cin >> answer;
							if (answer == 1) {
								marks = marks + 3;
							} else {
								marks = marks - 1;
							}
							//q2
							line();
							cout
									<< "Q2.Which of the following is the address operator?"
									<< endl;
							cout << "1. @" << endl;
							cout << "2. #" << endl;
							cout << "3. &" << endl;
							cout << "4. %" << endl;
							cout << "Enter your option -  ";
							cin >> answer;
							if (answer == 3) {
								marks = marks + 3;
							} else {
								marks = marks - 1;
							}
							//q3
							line();
							cout
									<< "Q3.Which of the following features must be supported by any programming language to become a pure object - oriented programming language?"
									<< endl;
							cout << "1. Encapsulation." << endl;
							cout << "2. Inheritance." << endl;
							cout << "3. Polymorphism." << endl;
							cout << "4. All of the above." << endl;
							cout << "Enter your option -  ";
							cin >> answer;
							if (answer == 4) {
								marks = marks + 3;
							} else {
								marks = marks - 1;
							}
							//q4
							line();

							cout
									<< "Q4.The programming language that has the ability to create new data types is called___."
									<< endl;
							cout << "1. Overloaded." << endl;
							cout << "2. Encapsulated." << endl;
							cout << "3. Reprehensible." << endl;
							cout << "4. Extensible." << endl;
							cout << "Enter your option -  ";
							cin >> answer;
							if (answer == 4) {
								marks = marks + 3;
							} else {
								marks = marks - 1;
							}
							//q5
							line();
							cout
									<< "Q5.Which of the following is the original creator of the C++ language?"
									<< endl;
							cout << "1. Dennis Ritchie." << endl;
							cout << "2. Ken Thompson." << endl;
							cout << "3. Bjarne Stroustrup." << endl;
							cout << "4. Brian Kernighan." << endl;
							cout << "Enter your option -  ";
							cin >> answer;
							if (answer == 3) {
								marks = marks + 3;
							} else {
								marks = marks - 1;
							}
							break;
						case 2:
							if (i == 2) {
								cout << "Correct Answers:  " << endl;
								line();
								cout
										<< "Which types of arrays are always considered as linear arrays?"
										<< endl;
								cout << "Answer: 1. Single - dimensional"
										<< endl;
								cout
										<< "Explanation: Single - dimensional arrays are always considered as linear arrays.";
								line();
								cout
										<< "Q2.Which of the following is the address operator?"
										<< endl;
								cout << "Answer: 3. &." << endl;
								cout
										<< "Explanation: To print the address of any variable, a user can use the (&) operator. To understand it more clearly, consider the following example:";
								line();
								cout
										<< "Q3.Which of the following features must be supported by any programming language to become a pure object - oriented programming language?"
										<< endl;
								cout << "Answer: 4. All of the above." << endl;
								cout
										<< "Explanation: There is nothing that forces a user to use the OOP concept in C++. In contrast, it is necessary for a programming language that it must support all three features as encapsulation, inheritance, and polymorphism completely to become a pure Object - Oriented Language.";
								line();
								cout
										<< "Q4.The programming language that has the ability to create new data types is called___."
										<< endl;
								cout << "Answer: 4. Extensible." << endl;
								cout
										<< "Explanation: A language that can generate the new data types is known as the extensible languages as they can handle the new data types.";
								line();
								cout
										<< "Q5.Which of the following is the original creator of the C++ language?"
										<< endl;
								cout << "Answer: 3. Bjarne Stroustrup." << endl;
								cout
										<< "Explanation: Bjarne Stroustrup creates C++ language during 1997 at AT&T Bell Labs.";
								line();
							} else {
								cout << "Please attempt the test " << endl;

							}

							break;
						case 3:
							if (i == 3) {
								cout << "Display total marks.";
								cout << endl;

								cout << "Your Total Score is " << marks
										<< " out of " << totalmarks << endl;
								break;
							} else {
								cout << "Please attempt the test " << endl;

							}

						case 4:
							if (i == 4) {
								if (marks >= 10) {
									cout << "\n\n\t1:Student Reports\n";
									line();
									cout << "First Name" << setw(12)
											<< " LastName" << setw(12);
									cout << "Email" << setw(12) << "Marks";
									cout << setw(16) << "Outof\n";
									fin.open("createaccount.txt");
									line();
									cout << fname2 << setw(12) << lname2
											<< "    ";
									cout << email1 << setw(12) << marks
											<< setw(12) << totalmarks;
//								cout << fname2 << setw(12) << lname2 <<" ";
//								cout << email1 << setw(12) << marks << setw(12)<< totalmarks;
									line();
									fin.close();

									cout << name
											<< " Congratulation you are pass and your marks is "
											<< marks << endl;
								} else {
									line();
									cout << "First Name" << setw(12)
											<< " LastName" << setw(12);
									cout << "Email" << setw(12) << "Marks";
									cout << setw(16) << "Outof\n";
									fin.open("createaccount.txt");
									line();
									cout << fname2 << setw(12) << lname2
											<< "    ";
									cout << email1 << setw(12) << marks
											<< setw(12) << totalmarks;
									line();
									cout << name
											<< " Sorry!!You are fail and your marks is "
											<< marks << endl;
									cout << "Please attempt next time ";
								}
							} else {
								cout << "Please attempt the test" << endl;

							}
							break;
						case 5:
							cout << "Thank You for taking the Quiz" << endl;
							exit(0);
							break;
						default:
							break;

						}
					}

				} else {
					cout << "wrong";
					exit(0);
				}
				break;
			case 2:
				cout << "Enter first name - ";
				cin >> name;
				cout << "Enter last name - ";
				cin >> lname;
				cout << "Enter email - ";
				cin >> email;
				ofstream File("createaccount.txt");
				File << name << " " << lname << " " << email << endl;
				File.close();
				cout << "Account created successfully";
				line();
				cout<<endl;
				break;
			}
		}
	}
};
int main() {
	name n1;
	n1.login();
	name (ob);
	return 0;
}
