#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle : public Shape {
public:
	Circle() = delete;
	Circle(double r);
	double GetArea() const override;
	double GetRadia() const { return radia; }
private:
	double radia;
};


#endif // !CIRCLE_H

