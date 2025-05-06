// Basic Shapes Programming Project (Polymorphism).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BasicShape.h"
#include "Circle.h"
#include "Square.h"
int main()
{
    BasicShape* shapes[5];

    shapes[0] = new Rectangle(3.0, 1, "Rectangle 1");
    shapes[1] = new Rectangle(2.0, 1, "Rectangle 2");
    shapes[2] = new Circle(1, 2, 3.0, "Circle 1");
    shapes[3] = new Circle(6, 3, 2.5, "Circle 2");
    shapes[4] = new Square(6, "Square 1");

    for (int i = 0; i < 5; ++i) {
        cout << shapes[i]->getName() << " - Area: " << shapes[i]->getArea() << endl;
    }

    for (int i = 0; i < 5; ++i) {
        delete shapes[1];
    }
}
