#include "Parallelepiped.h"

parallelepiped::parallelepiped(int length, int width,int height) 
	: Rectangle(length,width), height(height)
{
}

double parallelepiped::GetArea() const
{
	return 2 * (Rectangle::GetArea() + height * Rectangle::GetLength() + height * Rectangle::GetWidth());
}

double parallelepiped::GetVolume() const
{
	return Rectangle::GetArea() * height;
}
