#include "Cube.h"

Cube::Cube(double length, string color,bool filled):Shape3D(color, filled)
{
	this->length = length;
}

double Cube::getLength() const
{
	return length;
}

void Cube::setLength(double length)
{
	this->length = length;
}

double Cube::getArea() const
{
	return 6 * length * length;
}

double Cube::getVolume() const
{
	return length * length * length;
}

string Cube::toString() const
{
	return "cube";
}


