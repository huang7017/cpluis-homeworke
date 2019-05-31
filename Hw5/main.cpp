#include"Ball.h"
#include"Cube.h"
#include"Rectangle.h"
#include"Circle.h"
#include<iostream>
#include<iomanip>
#include"Shape3D.h"
using namespace std;
bool equalArea(const Shape& g1,const Shape& g2)
{
	return g1.getArea() == g2.getArea();
}

bool equalVolume(const Shape3D& g1, const Shape3D& g2)
{
	return g1.getVolume() == g2.getVolume();
}
bool equalPerimeter(const Shape2D& g1, const Shape2D& g2) {
	return g1.getPerimeter() == g2.getPerimeter();
}

void display(Shape& g)
{
	Shape *p = &g;
	cout << p->toString() <<", "<<fixed << setprecision(0);
	Ball* p1 = dynamic_cast<Ball*>(p);
	if (p1 != 0)
		cout << p1->getRadius();
	Cube* p2 = dynamic_cast<Cube*>(p);
	if (p2 != 0)
		cout << p2->getLength();
	Circle* p3 = dynamic_cast<Circle*>(p);
	if (p3 != 0)
		cout << p3->getRadius();
	Rectangle* p4 = dynamic_cast<Rectangle*>(p);
	if (p4 != 0)
		cout << p4->getWidth()<<", "<<p4->getHeight();
	cout<<fixed<<setprecision(2)<< ", " << p->getColor() << ", " << p->getArea() << endl;
}

int main() {
	Circle circle(5, "yellow",1);
	display(circle);
	Rectangle rectangle(3, 4,"red",0);
	display(rectangle);
	Ball ball(5,"blue",1);
	display(ball);
	Cube cube(4, "black", 0);
	display(cube);

	cout << "circle " << circle.getPerimeter() << (equalPerimeter(circle, rectangle) ? "==" : "!=") << "rectangle " << rectangle.getPerimeter() << endl;
	cout << "ball " << ball.getVolume() << (equalVolume(ball, cube) ? "==" : "!=") << "cube " << cube.getVolume() << endl;
	system("pause");
}