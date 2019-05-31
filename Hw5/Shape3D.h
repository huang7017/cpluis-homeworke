#ifndef SHAPE3D_H
#define SHAPE3D_H
#include <string>
#include"Shape.h"
using namespace std;

class Shape3D:public Shape
{
public:
	Shape3D(string&, bool&);
	virtual double getVolume() const = 0;
}; // Must place semicolon here

#endif 