#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape {
public:
	Shape() : ptr(nullptr), size_(0) {}
	virtual double GetArea() const = 0;
	virtual std::string GetColour() const { return Colour; };
	void setColour(const std::string& s) { Colour = s; }
	size_t size() { return size_; }

private:
	std::string Colour;
	int* ptr;
	size_t size_;
	static int count;
};
#endif
