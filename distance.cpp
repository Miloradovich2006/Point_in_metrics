#include "distance.h"
#include <cmath>

double kill_me_please_euclide(Point A, Point B) {
	return sqrt((A.first()-B.first())*(A.first()-B.first())+(A.second()-B.second())*(A.second()-B.second())+(A.third()-B.third())*(A.third()-B.third()));
}