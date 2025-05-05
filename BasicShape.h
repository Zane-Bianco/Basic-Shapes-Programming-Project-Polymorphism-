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
	void setName(string n);
	double getArea() { return area; };
	string getName() { return name; };
	virtual double calcArea() = 0;
};

#endif