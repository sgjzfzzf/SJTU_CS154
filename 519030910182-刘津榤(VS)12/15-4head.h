#ifndef _head
#define _head

#include<iostream>
#include<cmath>
#define Pi 3.1415926
using namespace std;

class shape
{
protected:
	double area;
public:
	void getArea()
	{
		cout << "the area is " << area << endl;
	}
};

class triangle :public shape
{
protected:
	double a, b, c;
public:
	triangle(double A, double B, double C) :a(A), b(B), c(C)
	{
		double p = a + b + c;
		area = sqrt(p * (p - a) * (p - b) * (p - c));
	}
};

class rectangle :public shape
{
protected:
	double a, b;
public:
	rectangle(double A, double B) :a(A), b(B)
	{
		area = a * b;
	}
};

class ellipse:public shape
{
protected:
	double a, b;
public:
	ellipse(double A, double B) :a(A), b(B)
	{
		area = Pi * a * b;
	}
};

class square :public rectangle
{
public:
	square(double A) :rectangle(A,A) {};
};

class circle :public ellipse
{
public:
	circle(double R) :ellipse(R, R) {};
};

#endif