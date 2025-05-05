#include "Circle.h"
#include <iostream>
#include <numbers>
#define PI 3.14159265358979323846

using namespace std;

Circle::Circle(double x, double y, double r, string n = "Circle") {
	BasicShape::setName(n);
	calcArea(r);
}

void Circle::calcArea(double r) {
	BasicShape::setArea(((r * r) * PI));
}