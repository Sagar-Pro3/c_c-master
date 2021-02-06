//============================================================================
// Name        : cpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class name {

private:
	static int x;
	static int y;
public:
	static void hello() {
		cout << "x " << x << endl;
		cout << "y " << y << endl;
	}
};
int name::x = 10;
int name::y = 20;
int main() {
	name n1;
	n1.hello();
	name::hello();
	return 0;
}
