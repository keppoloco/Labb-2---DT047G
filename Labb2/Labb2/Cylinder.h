#pragma once
#ifndef CYLINDER_H
#define CYLINDER_H
#include "Circle.h"
class Cylinder : public Circle {
public:
	Cylinder() = delete;
	Cylinder(double r, int height);
	double GetVolume() const;
	virtual double GetArea() const override;

private:
	int height;
};


#endif // !CYLINDER_H
