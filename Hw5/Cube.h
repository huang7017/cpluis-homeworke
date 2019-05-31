#ifndef CUBE_H
#define CUBE_H
#include"Shape3D.h"
#include<string>

#include<cmath>
using namespace std;
class Cube : public Shape3D
{
public:
	Cube(double, string, bool);
	double getLength() const;
	void setLength(double);
	double getArea()const;
	double getVolume()const;
	string toString()const;
private:
	double length;
}; // Must place semicolon here

#endif 
