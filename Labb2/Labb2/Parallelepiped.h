#pragma once
#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H
#include "Rectangle.h"

class parallelepiped : public Rectangle {
public:
	parallelepiped() = delete;
	parallelepiped(int height,int length, int width);
	double GetArea() const override;
	double GetVolume() const;

private:
	int height;
};

#endif //! PARALLELEPIPED_H
