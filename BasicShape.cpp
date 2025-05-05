#include "BasicShape.h"
#include <iostream>
#include <string>

using namespace std;

void BasicShape::setArea(double a){
	if (a < 0) {
		cout << "Area Invalid Setting default";
		area = 5;
	}
	area = a;
}

void BasicShape::setName(string n) {
	name = n;
}