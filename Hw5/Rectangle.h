#ifndef RECTANGLE_H

#define RECTANGLE_H

#include "Shape2D.h"



class Rectangle : public Shape2D

{

public:

	Rectangle(double width, double height, string color, bool filled);

	double getWidth();

	void setWidth(double);

	double getHeight();

	void setHeight(double);

	double getArea()const;

	double getPerimeter()const;
	string toString()const;


private:

	double width;

	double height;

};  // Must place semicolon here


#endif
