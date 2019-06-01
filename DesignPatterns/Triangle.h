#ifndef TRIANGLE_H
#define TRIANGLE_H


#include "Shape.h"
class Triangle : public Shape
{
public:
	void update()
	{
		std::cout << "I am a triangle" << std::endl;
	}
	Triangle();
	~Triangle();
};

#endif // !TRIANGLE_H