#ifndef SHAPE2D_H
#define SHAPE2D_H
#include <string>
#include"Shape.h"
using namespace std;

class Shape2D :public Shape
{
public:
	Shape2D(string& color, bool& filled);
	virtual double getPerimeter() const = 0;
}; // Must place semicolon here

#endif 