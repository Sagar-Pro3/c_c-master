#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>

using namespace std;
class name {
public:
	int option, password, answer, marks = 0, totalmarks = 15, count = 0, wrong = 0;
	int answer_1, answer_2, answer_3, answer_4, answer_5;
	int c = 0;
	string name, lname, fname, email, fname2, lname2, email1;
	char ch;
	int i;
	int x, y;
	char usr[10] = "admin";
	char pass[10] = "123";
	char us[10];
	char pas[10];
	int choice;
	int size = sizeof(name);
	void line() {
		cout << "\n";
		for (int i = 1; i < 80; i++)
			cout << "-";
		cout << endl;
	}

	void login() {
		cout << "Enter admin name: ";
		cin >> us;
		cout << "Enter admin password: ";

		for (; ch != '\r';) {
			ch = getch();
			pas[c] = ch;
			c++;
			cout << '*';
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
			//system("cls");
			cout << "Enter your first name - ";
			cin >> fname2;
			cout << "Enter your last name - ";
			cin >> lname2;
			cout << "Enter your email - ";
			cin >> email1;
			system("cls");
			for (int i = 1; i < 8; i++) {
				//system("cls");
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
				system("cls");
				cout << endl;
				switch (option) {
				case 1:
					//q1
					cout << "Q1.Which types of arrays are always considered as linear arrays?" << endl;
					cout << "1. Single - dimensional." << endl;
					cout << "2. void virtual f()=0 { }." << endl;
					cout << "3. virtual void f() {} = 0;." << endl;
					cout << "4. None of the above." << endl;
					cout << "Enter your option -  ";
					cin >> answer_1;
					if (answer_1 == 1) {
						marks = marks + 3;
						count++;
					} else {

						marks = marks - 1;
						wrong++;
					}
					//}
					//q2
					line();
					system("cls");
					cout<<endl;
					cout << "Q2.Which of the following is the address operator?" << endl;
					cout << "1. @" << endl;
					cout << "2. #" << endl;
					cout << "3. &" << endl;
					cout << "4. %" << endl;
					cout << "Enter your option -  ";
					cin >> answer_2;
					if (answer_2 == 3) {
						marks = marks + 3;
						count++;
					} else {
						marks = marks - 1;
						wrong++;
					}

					line();
					system("cls");
					//q3
					cout << "Q3.Which of the following features must be supported by any programming language to become a pure object - oriented programming language?" << endl;
					cout << "1. Encapsulation." << endl;
					cout << "2. Inheritance." << endl;
					cout << "3. Polymorphism." << endl;
					cout << "4. All of the above." << endl;
					cout << "Enter your option -  ";
					cin >> answer_3;
					if (answer_3 == 4) {
						marks = marks + 3;
						count++;
					} else {
						marks = marks - 1;
						wrong++;
					}
					//q4
					line();
					system("cls");
					cout << "Q4.The programming language that has the ability to create new data types is called___."
							<< endl;
					cout << "1. Overloaded." << endl;
					cout << "2. Encapsulated." << endl;
					cout << "3. Reprehensible." << endl;
					cout << "4. Extensible." << endl;
					cout << "Enter your option -  ";
					cin >> answer_4;
					if (answer_4 == 4) {
						marks = marks + 3;
						count++;
					} else {
						marks = marks - 1;
						wrong++;
					}
					//q5
					line();
					system("cls");
					cout << "Q5.Which of the following is the original creator of the C++ language?" << endl;
					cout << "1. Dennis Ritchie." << endl;
					cout << "2. Ken Thompson." << endl;
					cout << "3. Bjarne Stroustrup." << endl;
					cout << "4. Brian Kernighan." << endl;
					cout << "Enter your option -  ";
					cin >> answer_5;
					if (answer_5 == 3) {
						marks = marks + 3;
						count++;
					}  /*if (answer_5 == 1) {
						cout << "Dennis Ritchie." << endl;
					}  if (answer_5 == 2) {
						cout << "Ken Thompson." << endl;
					}  if (answer_5 == 4) {
						cout << "Brian Kernighan." << endl;
					}*/ else {
						marks = marks - 1;
						wrong++;
					}
					break;

				case 2:

					if (i == 2) {
						cout << "Correct answer is : " << count << endl;
						cout << "Wrong answer is : " << wrong << endl;
						cout << endl;
						//q1 chi condition
						if (answer_1 == 1) {
							cout << "Q1. correct answer is: " << answer_1 << " ";
							cout<<"(1.Single - dimensional.)"<<endl;
							line();
						} if (answer_1 == 2) {
							cout << "Q1. your answer is: " << answer_1 << " ";
							cout<<"(2.void virtual f()=0 { }.)"<<endl;
							cout<<"(CORRECT ANSWER  IS 1.Single - dimensional.)"<<endl;
							line();
						}if (answer_1 == 3) {
							cout << "Q1. your answer is: " << answer_1 << " ";
							cout<<"(3.virtual void f() {} = 0;.)"<<endl;
							cout<<"(CORRECT ANSWER  IS 1.Single - dimensional.)"<<endl;
							line();
						}if (answer_1 == 4) {
							cout << "Q1. your answer is: " << answer_1 << " ";
							cout<<"(4.None of the above.)"<<endl;
							cout<<"(CORRECT ANSWER  IS 1.Single - dimensional.)"<<endl;
							line();
						}else {
							cout << "Invalid Input"<< endl;
						}


						//q2 chi condition
						if (answer_2 == 3) {
							cout << "Q2. correct answer is: " << answer_2 << " ";
							cout<<"(3.&)"<<endl;
							line();
						}if (answer_2 == 1) {
							cout << "Q2. your answer is: " << answer_2 << " ";
							cout<<"(1.@)"<<endl;
							cout<<"(CORRECT ANSWER  IS 3.&)"<<endl;
							line();
						} if (answer_2 == 2) {
							cout << "Q2. your answer is: " << answer_2 << " ";
							cout<<"(2.#)"<<endl;
							cout<<"(CORRECT ANSWER  IS 3.&)"<<endl;
							line();
						} if (answer_2 == 4) {
							cout << "Q2. your answer is: " << answer_2 << " ";
							cout<<"(4.%)"<<endl;
							cout<<"(CORRECT ANSWER  IS 3.&)"<<endl;
							line();
						}else {
							cout << "Invalid Input"<< endl;
						}

						//q3 chi condition
						if (answer_3 == 4) {
							cout << "Q3. correct answer is: " << answer_3 << " ";
							cout<<"(4.All of the above.)"<<endl;
							line();
						}if (answer_3 == 3) {
							cout << "Q3. Your answer is: " << answer_3 << " ";
							cout<<"(3.Polymorphism.)"<<endl;
							cout<<"(CORRECT ANSWER  IS 4.All of the above.)"<<endl;
							line();
						}
						if (answer_3 == 2) {
							cout << "Q3. Your answer is: " << answer_3 << " ";
							cout<<"(2.Inheritance.)"<<endl;
							cout<<"(CORRECT ANSWER  IS 4.All of the above.)"<<endl;
							line();
							}
						if (answer_3 == 1) {
							cout << "Q3. Your answer is: " << answer_3 << " ";
							cout<<"(1.Encasulation.)"<<endl;
							cout<<"(CORRECT ANSWER  IS 4.All of the above.)"<<endl;
							line();
							}
						else {
						}

						//q4 chi condition
						if (answer_4 == 4) {
							cout << "Q4. correct answer is: " << answer_4 <<" ";
							cout<<"(4.Extensible.)"<<endl;
							line();
						} if(answer_4==3){
							cout<<"Q4. your answer is: "<<answer_4<<" ";
							cout<<"(3.Reprehensible.)"<<endl;
							cout<<"(CORRECT ANSWER  IS 4.Extensible.)"<<endl;
							line();
						}if(answer_4==2){
							cout<<"Q4. your answer is: "<<answer_4<<" ";
							cout<<"(2.Encapsulated)"<<endl;
							cout<<"(CORRECT ANSWER  IS 4.Extensible.)"<<endl;
							line();
						}
						if(answer_4==1){
							cout<<"Q4. your answer is: "<<answer_4<<" ";
							cout<<"(1.Overloaded)"<<endl;
							cout<<"(CORRECT ANSWER  IS 4.Extensible.)"<<endl;
							line();
						}
						else {
							cout << "Invalid Input"<< endl;
						}

						//q5 chi condition
						if (answer_5 == 3) {
							cout << "Q5. correct answer is: " << answer_5 <<" " ;
							cout<<"(3.Bjarne Stroustrup.)"<<endl;
							line();
						} if(answer_5==1){
							cout << "Q5. your answer is: " << answer_5 <<" ";
							cout << "(1.Dennis Ritchie.)" << endl;
							cout<<"(CORRECT ANSWER IS 3.Bjarne Stroustrup.)"<<endl;
							line();
						}if(answer_5==2){
							cout << "Q5. your answer is: " << answer_5 <<" ";
							cout << "(2.Ken Thompson.)" << endl;
							cout<<"(CORRECT ANSWER  IS 3.Bjarne Stroustrup.)"<<endl;
							line();
						}if(answer_5==4){
							cout << "Q5. your answer is: " << answer_5 <<" ";
							cout << "(4.Brian Kernighan.)" << endl;
							cout<<"(CORRECT ANSWER IS 3.Bjarne Stroustrup.)"<<endl;
							line();
						}
						else {
 							cout << "Invalid Input"<< endl;
						}

						cout << endl;
						/*	cout << "Your answer is:  " << wrong_ans_1 << endl;
						 cout << "Your answer is:  " << wrong_ans_2 << endl;
						 cout << "Your answer is:  " << wrong_ans_3 << endl;
						 cout << "Your answer is:  " << wrong_ans_4 << endl;
						 cout << "Your answer is:  " << wrong_ans_5 << endl;*/
					} else {
						cout << "Please attempt the test " << endl;

					}

					break;
				case 3:
					if (i == 3) {
						system("cls");
						cout << "Display total marks.";
						cout << endl;

						cout << "Your Total Score is " << marks << " out of "
								<< totalmarks << endl;

					} else {
						cout << "Please attempt the test " << endl;

					}
					break;

				case 4:
					if (i == 4) {
						if (marks >= 10) {
							cout << "\n\n\t1:Student Reports\n";
							line();
							cout << "First Name" << setw(12) << " LastName"
									<< setw(12);
							cout << "Email" << setw(12) << "Marks";
							cout << setw(16) << "Outof\n";

							line();
							cout << fname2 << setw(12) << lname2 << "    ";
							cout << email1 << setw(12) << marks << setw(12)
									<< totalmarks;
							line();

							cout << name
									<< " Congratulation you are pass and your marks is "
									<< marks << endl;
						} else {
							line();
							cout << "First Name" << setw(12) << " LastName"
									<< setw(12);
							cout << "Email" << setw(12) << "Marks";
							cout << setw(16) << "Outof\n";

							line();
							cout << fname2 << setw(12) << lname2 << "    ";
							cout << email1 << setw(12) << marks << setw(12)
									<< totalmarks;
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
			system("cls");
		} else {
			cout << "wrong";
			exit(0);
		}
	}
};
int main() {
	name n1;
	n1.login();
	return 0;
}

