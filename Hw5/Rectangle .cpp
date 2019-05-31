#include "Rectangle.h"







Rectangle::Rectangle(double width, double height, string color, bool filled):Shape2D(color, filled)
{
	this->width = (width >= 0) ? width : 0;
	this->height = (height >= 0) ? height : 0;
}

// Return the width of this rectangle
double Rectangle::getWidth()

{

	return width;

}



// Set a new radius
void Rectangle::setWidth(double width)

{

	this->width = (width >= 0) ? width : 0;

}



// Return the height of this rectangle
double Rectangle::getHeight()

{

	return height;

}



// Set a new height
void Rectangle::setHeight(double height)

{

	this->height = (height >= 0) ? height : 0;

}



// Return the area of this rectangle
double Rectangle::getArea()const

{

	return width * height;

}



// Return the perimeter of this rectangle
double Rectangle::getPerimeter()const

{

	return 2 * (width + height);

}

string Rectangle::toString()const
{
	return string("rectangle");
}
