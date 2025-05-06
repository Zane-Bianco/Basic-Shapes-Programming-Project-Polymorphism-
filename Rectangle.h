#pragma once
#include "BasicShape.h"
#ifndef Rectangle_h
#define Rectangle_h

#include <string>

using namespace std;

class Rectangle :
    public BasicShape
{
private:
    double length, width;
public:
    Rectangle(double l, double w, string n = "Rectangle"); //constructor
    double calcArea() override;
    double getLength() { return length; }
    double getWidth() { return width; };
};

#endif