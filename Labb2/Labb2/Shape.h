#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape {
public:
	virtual double GetArea() const = 0;
	virtual std::string GetColour() const = 0;
	void setColour(const std::string& s) { Colour = s; }

private:
	std::string Colour;
	double area;
};
#endif
