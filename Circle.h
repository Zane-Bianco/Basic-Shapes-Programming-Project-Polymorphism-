#pragma once
#ifndef Circle_h
#define Circle_h
#include "BasicShape.h"
#include <string>

using namespace std;

class Circle : public BasicShape
{
private:
	double xCenter, yCenter, radius;
public:
	Circle(double x, double y, double r, string n = "Circle"); // Constructor
	double calcArea() override;
	double getXcenter() { return xCenter; };
	double getYcenter() { return yCenter; };
	double getRadius() { return radius; };
};

#endif