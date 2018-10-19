#ifndef DIVE_LOG_H
#define DIVE_LOG_H
#include "dive.h"
#include<vector>

using namespace std;
/*
POINTS FOR THIS QUESTION: 25

Create a DiveLog class which has a vector of Dive objects plus a DiveLog.get_avg_sacr() function. 
Also add an add_dive function to add Dive instances into the vector.
The get_avg_sacr class function returns the average of the Dive's get_sacr function.
*/
class DiveLog
{
public:
	vector<Dive> dive_objs{};
	double get_avg_sacr();
	void add_dive(Dive d);
private:

};


#endif // !DIVE_LOG_H
