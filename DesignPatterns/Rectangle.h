#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
class Rectangle : public Shape
{
public:
	void update()
	{
		std::cout << "I am a rectangle" << std::endl;
	}
	Rectangle();
	~Rectangle();
};

#endif//RECTANGLE_H