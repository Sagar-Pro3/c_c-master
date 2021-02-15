#include <iostream>
using namespace std;
class name {
public:
	char value1 = 65;
	char value2 = 98;
	char value3 = 99;
	char value4 = 68;
	char value5 = 101;
	int line=2;
	int charcount=5;
	int numcount=5;
	int num = 1;
	void fun() {
		for (int i = 1; i <= line; i++) {
			cout << value1;
			for (int j = 1; j <= 1; j++) {
				cout << value2;
				cout << value3;
				cout << value4;
				cout << value5;
			}
			cout << endl;
			for (int k = 1; k <= numcount; k++) {
				cout << num;
				num++;
			}
			cout<<endl;
			num=1;
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
