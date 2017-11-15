#include<iostream>
#include"CircleClass.h"
using namespace std;


int main()
{
	Circle shape;
	double shapeRadius;
	cout << "Please input the radius of the circle"<<endl;
	cin >> shapeRadius;
	shape.setRad(shapeRadius);
	shape.calcArea();
	shape.calcCircumference();
	cout <<"These are the stats for a circle with a radius of "<<shape.getRadius()<<endl;
	cout <<"The area of the circle is " << shape.getArea()<< endl;
	cout <<"The circumference of the circle is " << shape.getCircumference()<<endl;

	return 0;
}
