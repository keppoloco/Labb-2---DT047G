#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {
public:
	Rectangle() = delete;
	Rectangle(int l, int w);
	double GetArea() const override;
	double GetLength() const { return length; }
	double GetWidth() const { return width; }

private:
	int length;
	int width;
};

#endif //! RECTANGLE_H