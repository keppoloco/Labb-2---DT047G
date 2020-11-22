#include "Circle.h"
Circle::Circle(double r) : radia(r) {}
double Circle::GetArea() const
{
	return (atan(1) * 4) * pow(radia, 2);
}
