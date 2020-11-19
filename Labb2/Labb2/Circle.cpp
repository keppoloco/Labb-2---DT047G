#include "Circle.h"
double Circle::GetArea() const
{
	return (atan(1) * 4) * pow(radia, 2);
}

std::string Circle::GetColour() const
{
	return std::string("Turquoise");
}
