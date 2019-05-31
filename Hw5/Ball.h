#ifndef BALL_H
#define BALL_H
#include"Shape3D.h"
#include<string>

#include<cmath>
using namespace std;
class Ball: public Shape3D
{
public:
	Ball(double, string,bool);
	double getRadius() const;
	void setRadius(double);
	virtual double getArea()const;
	virtual double getVolume()const;
	virtual string toString()const;
private:
	double radius;
}; // Must place semicolon here

#endif 
