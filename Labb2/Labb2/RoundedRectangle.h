#pragma once
#ifndef ROUNDEDRECTANGLE_H
#define ROUNDEDRECTANGLE_H
#include "Rectangle.h"
#include "Circle.h"
class RoundedRectangle : public Rectangle {
public:
	RoundedRectangle(int length, int width, double radia);
	double GetArea() const override;

private:
	Circle circle_;
};

#endif //! ROUNDEDRECTANGLE_H
