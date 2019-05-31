#include "Circle.h"


// Construct a circle object
Circle::Circle(double radius,string color,bool filled):Shape2D(color,filled)
{
	this->radius = radius;
}

// Return the area of this circle
double Circle::getArea()const
{
	return radius * radius * 3.14159;
}

// Return the radius of this circle
double Circle::getRadius()
{
	return radius;
}

double Circle::getPerimeter()const
{
	return radius*2*3.14159;
}

string Circle::toString()const
{
	return "circle";
}

// Set a new radius
void Circle::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}
