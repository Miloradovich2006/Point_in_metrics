#include <iostream>
#include "point.h"
#include "distance.h"
using namespace std;

int main(){
	Point A;
	Point B(1, 1, 1);
	cout << kill_me_please_euclide(A, B) << endl;
	return 0;
};