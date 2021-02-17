//============================================================================
// Name        : templates.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template<class t>
	t add(t x, t y) {
		return x + y;
	}
int main() {
cout<<add(1,2);
	return 0;
}
