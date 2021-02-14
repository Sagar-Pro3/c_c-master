//============================================================================
// Name        : File.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;
class filehandling {
public:

	void open() {
		ofstream File("Demo.txt");
		File << "Hi this is demo";
		File.close();
		cout << "File Created successfully";
	}
};
int main() {
	filehandling f1;
	f1.open();
	return 0;
}
