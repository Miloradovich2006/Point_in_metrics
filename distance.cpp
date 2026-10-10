#include "distance.h"
#include <cmath>

double kill_me_please_euclide(Point A, Point B) {
	return sqrt((A.first()-B.first())*(A.first()-B.first())+(A.second()-B.second())*(A.second()-B.second())+(A.third()-B.third())*(A.third()-B.third()));
}

double kill_me_please_city(Point A, Point B) {
	return std::abs(A.first()-B.first())+std::abs(A.second()-B.second())+std::abs(A.third()-B.third());
}