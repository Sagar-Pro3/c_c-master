//============================================================================
// Name        : templates2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
template<class t, class u>
	t add(t x, u y) {
		return x + y;
	}
int main() {
cout<<add(1.2,2.2);
	return 0;
}
