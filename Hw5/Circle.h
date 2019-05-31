#ifndef CIRCLE_H
#define CIRCLE_H 
#include<string>
#include"Shape2D.h"
using namespace std;
class Circle:public Shape2D
{
public:
	// Construct a circle object
	Circle(double,string,bool);

	// Return the area of this circle
	virtual double getArea() const;

	// getter
	double getRadius();
	
	// setter
	void setRadius(double newRadius);
	virtual double getPerimeter() const;

	virtual string toString() const;
private:
	// The radius of this circle
	double radius;
};

#endif