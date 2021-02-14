//============================================================================
// Name        : ReadFileData.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include<string>
using namespace std;
class ReadingFileData {
public:
	void open() {
		ofstream File("Dinga.txt");
		File << "Hi my name is dinga";
		File.close();
		cout << "File created...";
		cout<<endl;
	}
	void read() {
		string myText;
		ifstream ReadFile("Dinga.txt");
		while (getline(ReadFile, myText)) {
			cout << myText;
		}
		ReadFile.close();
		cout<<endl;
		cout << "File read...";
	}
};
int main() {
	ReadingFileData r1;
	r1.open();
	r1.read();
	return 0;
}
