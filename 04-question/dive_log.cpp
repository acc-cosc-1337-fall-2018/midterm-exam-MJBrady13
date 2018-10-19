#include "dive_log.h"
#include"dive.h"

double DiveLog::get_avg_sacr()
{
	double total = 0.0;
	for (auto i : dive_objs) 
	{
		double sacr = i.get_sacr();
		total += sacr;
	}
	return (total/3);
}

void DiveLog::add_dive(Dive d)
{
	dive_objs.push_back(d);
}

