#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;

class Shape
{
public:
	Shape();
	Shape(const string& color, bool filled);
	string getColor() const;
	void setColor(const string& color);
	bool isFilled() const;
	void setFilled(bool filled);
	virtual double getArea()const =0;
	virtual string toString() const = 0;
private:
	string color;
	bool filled;
}; // Must place semicolon here

#endif 