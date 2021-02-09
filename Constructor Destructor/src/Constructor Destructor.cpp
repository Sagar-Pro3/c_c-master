//============================================================================
// Name        : Constructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class sample {
public:
	sample() {
		cout << "hello" << endl;
	}
	~ sample() {
		cout << "Destroy hello" << endl;
	}

};
int main() {
	sample s1, s2, s3;
	return 0;
}
