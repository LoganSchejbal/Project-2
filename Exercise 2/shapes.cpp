#include <cmath>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Shapes.h"



// BasicShape :
void BasicShape::setArea(double a) {
    area = a;
}

double BasicShape::getArea() const {
    return area;
}

// Circle:
Circle::Circle(long x, long y, double r) {
    centerX = x;
    centerY = y;
    radius = r;
    calcArea();   // calculates area when object is created
}

long Circle::getCenterX() const {
    return centerX;
}

long Circle::getCenterY() const {
    return centerY;
}

void Circle::calcArea() {
    double a = 3.14159 * radius * radius;
    setArea(a);
}

// Rectangle
Rectangle::Rectangle(long w, long l) {
    width = w;
    length = l;
    calcArea();  // calculates area when object is created
}

long Rectangle::getWidth() const {
    return width;
}

long Rectangle::getLength() const {
    return length;
}

void Rectangle::calcArea() {
    setArea(length * width);  // Converts itself to double
}
