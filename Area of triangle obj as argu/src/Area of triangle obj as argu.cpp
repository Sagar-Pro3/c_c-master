//============================================================================
// Name        : Area.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Triangle {
	int x, y, z;
public:
	void getdata(int temp1) {
		x = temp1;
	}
	void triangle(Triangle t1, Triangle t2) {
		z = 0.5 * t1.x * t2.x;
	}
	void display() {
		cout << "Area of triangle is : " << z << endl;
	}
private:
};
int main() {
	Triangle t1, t2, t3;
	t1.getdata(12);
	t2.getdata(5);
	t3.triangle(t1, t2);
	t3.display();
	return 0;
}
