#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle : public Shape {
public:
	Circle() = delete;
	Circle(double r) : radia(r){}
	double GetArea() const override;
	std::string GetColour() const override;

private:
	double radia;
};


#endif // !CIRCLE_H

