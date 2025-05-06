#include "Circle.h"
#include <iostream>
#include <cmath>

using namespace std;

Circle::Circle(double x, double y, double r, string n):xCenter(x),yCenter(y), radius(r){
	setName(n);
	calcArea();
}

double Circle::calcArea() {
	double area = (radius * radius) * 3.141592653589793238;
	setArea(area);
	return area;
}