#pragma once
#ifndef BasicShape_h
#define BasicShape_h

#include <string>

using namespace std;

class BasicShape
{
private:
	double area;
	string name;
public:
	void setArea(double a);
	void setName(const string& n);
	double getArea()const { return area; };
	string getName()const { return name; };
	virtual double calcArea() = 0;
	virtual ~BasicShape() {};
};

#endif