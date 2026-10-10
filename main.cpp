#include <iostream>
#include "point.h"
#include "distance.h"
using namespace std;

int main(){
	double S;
	int M;
	Point A;
	Point B(1, 1, 1);
	cout << "Choose a metric. Variants: 1 - euclidean metric, 2 - city metric, 3 - discrete metric." << endl;
	cin >> M;
	if (M==1) {
		S = kill_me_please_euclide(A, B);
	}
	if (M==2) {
		S = kill_me_please_city(A, B);
	}
	if (M==3) {
		S = kill_me_please_discrete(A, B);
	}
	cout << S;
	return 0;
};