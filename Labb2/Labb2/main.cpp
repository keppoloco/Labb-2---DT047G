#include "Cylinder.h"
#include "Parallelepiped.h"
#include "RoundedRectangle.h"
#include <vector>
#include <iostream>
#include <numeric>
#include <time.h>

void GetData(const std::vector<Shape*> &arr)
{
	double area = 0;
	std::cout << "Individual area and colors of shapes: " << '\n';
	for (const auto& a : arr) {
		std::cout << a->GetArea() << " -----> " << a->GetColour() << '\n';
		area += a->GetArea();
	}
	std::cout << '\n';
	std::cout << "Total area: " << area << '\n';
}

int main()
{
	std::vector<Shape*> shape_arr;

	shape_arr = {
		new Circle(3.2),
		new Cylinder(3.5,4),
		new Rectangle(4,5),
		new parallelepiped(4,5,6),
		new RoundedRectangle(6,5,3.2)
	};
	shape_arr[0]->setColour("Turqouise");
	shape_arr[1]->setColour("Beige");
	shape_arr[2]->setColour("Purple");
	shape_arr[3]->setColour("Gray");
	shape_arr[4]->setColour("Green");


	GetData(shape_arr);

	return 0;
}