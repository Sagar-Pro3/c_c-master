//============================================================================
// Name        : Time.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class time {
public:
	int h, m, s;
public:
	void input() {
		cout << "Enter the time in hh/mm/ss";
		cin >> h >> m >> s;

	}
	void add(time t1, time t2);
};
void time::add(time t1, time t2) {

	int day,hh, mm, ss, min, sec;
	ss = (t1.s + t2.s) % 60;
	sec = (t1.s + t2.s) / 60;
	cout << ss << endl;
	mm = (t1.m + t2.m + sec) % 60;
	min = (t1.m + t2.m) / 60;
	cout << min << endl;
	hh = (t1.h + t2.h + min) % 24;
	day = (t1.h + t2.h + min) / 24;
	cout << hh << endl;
	cout << hh << ":" << mm << ":" << ss;
}
int main() {
	time o1, o2, o3;

	o1.input();
	o2.input();
	o3.add(o1, o2);
	return 0;
}
