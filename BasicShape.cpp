#include "BasicShape.h"
#include <iostream>
#include <string>



using namespace std;

void BasicShape::setArea(double a){
	if (a < 0) {
		cout << "Area Invalid Setting default";
		area = 5;
	}
	else {
		area = a;
	}
	
}

void BasicShape::setName(const string& n) {
	name = n;
}
