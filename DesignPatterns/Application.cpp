#include<iostream>
#include<string>
#include"Window.h"
#include"Shape.h"

int main()
{
	Shape* basicShape = Shape::getShape("Triangle");
	basicShape->update();

	Shape* anotherShape = Shape::getShape("Rectangle");
	anotherShape->update();

	Window::getInstance()->update();

	system("pause");
	return 0;
}