#pragma once
#include "Rectangle.h"
#include <string>
#ifndef Square_h
#define Square_h

using namespace std;

class Square :
    public Rectangle
{
private:
    double side;
public:
    Square(double s, string n = "Square");
};

#endif 