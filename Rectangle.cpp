#include "Rectangle.h"
#include <string>

using namespace std;

Rectangle::Rectangle(double l, double w, string n):length(l), width(w) {
	setName(n);
	calcArea();

} 

double Rectangle::calcArea() {
	double area = length * width;
	setArea(area);
	return area;
}