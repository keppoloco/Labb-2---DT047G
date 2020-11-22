#include "Cylinder.h"

Cylinder::Cylinder(double r, int height): Circle(r), height(height)
{
}
double Cylinder::GetArea() const
{
	return Circle::GetArea() * 2 + height * (2 * atan(1) * 4 * Circle::GetRadia());
}
double Cylinder::GetVolume() const
{
	return Circle::GetArea() * height;
}
//