//Don't forget includes!!!!!
#include"dive.h"
#include<iostream>
#include<string>

using namespace std;

/*
Create an instance of Dive class.
The Dive class data member are:
d = depth in feet = 55
s = starting pressure = 3000
f = final pressure = 1000
t = time in minutes = 30

Output the function get_sacr to screen (should return 25). 66000/2640
*/
int main() 
{
	Dive dive;
	dive.d = 55;
	dive.s = 3000;
	dive.f = 1000;
	dive.t = 30;
	cout << dive.get_sacr();
	return 0;
}
