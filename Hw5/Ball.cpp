#include "Ball.h"

Ball::Ball(double radius, string color, bool filled):Shape3D(color,filled)
{
	this->radius = radius;
}

double Ball::getRadius() const
{
	return radius;
}

void Ball::setRadius(double radius)
{
	this->radius = radius;
}

double Ball::getArea() const
{
	return 4 * 3.14159*(radius*radius);
}

double Ball::getVolume() const
{
	return 4 *(3.14159*(radius*radius*radius))/3;
}

string Ball::toString() const
{
	return "ball";
}

