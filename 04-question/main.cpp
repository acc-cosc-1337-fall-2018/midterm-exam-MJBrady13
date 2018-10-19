//Don't forget includes!!!!!


#include"dive.h"
#include"dive_log.h"
#include<iostream>
#include<string>

using namespace std;

/*
Create an instance of DiveLog class.
Add three dive classes to the DiveLog class:
The Dive class 1 data member are:
d = depth in feet = 55
s = starting pressure = 3000
f = final pressure = 1000
t = time in minutes = 30

The Dive class 2 data member are:
d = depth in feet = 67
s = starting pressure = 3000
f = final pressure = 1000
t = time in minutes = 30

The Dive class 3 data member are:
d = depth in feet = 67
s = starting pressure = 3000
f = final pressure = 1000
t = time in minutes = 30

Output The DiveLog get_avg_sacr to screen. (should return 23)

*/
int main() 
{
	DiveLog dive_log;
	Dive dive1;
	dive1.d = 55;
	dive1.s = 3000;
	dive1.f = 1000;
	dive1.t = 30;
	Dive dive2;
	dive2.d = 67;
	dive2.s = 3000;
	dive2.f = 1000;
	dive2.t = 30;
	Dive dive3;
	dive3.d = 67;
	dive3.s = 3000;
	dive3.f = 1000;
	dive3.t = 30;
	dive_log.add_dive(dive1);
	dive_log.add_dive(dive2);
	dive_log.add_dive(dive3);
	cout<<dive_log.get_avg_sacr();

	return 0;
}
