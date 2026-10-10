#ifndef POINT_H
#define POINT_H

class Point {
private:
	double x, y, z;
public:
	Point(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}
	Point() : x(0), y(0), z(0) {}
	double first() const {
		return x;
	}
	double second() const {
		return y;
	}
	double third() const {
		return z;
	}
	~Point() {};
};

#endif