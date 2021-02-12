//============================================================================
// Name        : Stringconcat.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
class sample {
public:
	char name[100];
	void set(char n[]){
		strcpy(name,n);
	}
	void add(sample s1, sample s2) {
		strcpy(name, s1.name);
		strcat(name, s2.name);
	}
	void dis() {
		cout << name;
	}
};

int main() {
	sample s1,s2,s3;
	s1.set("Manga");
	s2.set("Mangi");
	s3.add(s1, s2);
	s3.dis();
	return 0;
}

