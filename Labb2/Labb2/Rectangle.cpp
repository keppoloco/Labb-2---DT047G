#include "Rectangle.h"

Rectangle::Rectangle(int l, int w) : length(l), width(w)
{
}

double Rectangle::GetArea() const
{
	int a = length * width;
	return a;
}
