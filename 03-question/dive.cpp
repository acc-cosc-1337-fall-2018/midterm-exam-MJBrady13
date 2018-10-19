#include "dive.h"


double Dive::get_sacr()
{
	double sacr;
	sacr = (33 * (s - f)) / (t * (d + 33));
	return sacr;
}
