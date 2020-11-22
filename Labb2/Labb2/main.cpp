#include "Cylinder.h"
#include "Parallelepiped.h"
#include <iostream>

int main()
{
	std::cout << "Hello, World!" << std::endl;

	parallelepiped p(3, 2, 1);
	std::cout << p.GetArea() << '\n';


	return 0;
}