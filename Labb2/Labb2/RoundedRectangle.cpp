#include "RoundedRectangle.h"
RoundedRectangle::RoundedRectangle(int length, int width, double radia) 
	: Rectangle(length, width), circle_(radia)
{
}

double RoundedRectangle::GetArea() const
{
	return (Rectangle::GetArea() - pow(circle_.GetRadia(), 2) * (4 - atan(1) * 4));
}
