#include "Rectangle.h"
#include <string>

using namespace std;

Rectangle::Rectangle(double l, double w, string n = "Rectangle") {
	BasicShape::setName(n);
	calcArea(l, w);

} 

void Rectangle::calcArea(double l, double w) {
	BasicShape::setArea((l * w));
}