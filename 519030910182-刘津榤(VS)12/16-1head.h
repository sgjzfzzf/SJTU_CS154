#ifndef _head
#define _head

#include<iostream>
using namespace std;

class Rational
{
private:
	int num;
	int den;
public:
	void Reduction()
	{
		int s = num > den ? den : num;
		for (int i = 2; i < s / 2; ++i)
		{
			while (num % i == 0 && den % i == 0)
			{
				num /= i;
				den /= i;
			}
		}
	}
	Rational(int N, int D) :num(N), den(D) 
	{
		Reduction();
	}
	Rational(int N) : num(N),den(1)
	{
		Reduction();
	}
	Rational operator*(const Rational& r)
	{
		Rational result(num * r.num, den * r.den);
		result.Reduction();
		return result;
	}
	Rational operator=(const Rational& r)
	{
		if (this == &r)
			return *this;
		num = r.num;
		den = r.den;
		return *this;
	}
	friend ostream& operator<<(ostream& os, const Rational& r)
	{
		os << r.num << '/' << r.den;
		return os;
	}
};

class Complex
{
private:
	int real;
	int imag;
public:
	Complex(int R, int I) :real(R), imag(I) {};
	Complex(int R) :real(R), imag(0) {};
	Complex operator*(const Complex& c)
	{
		Complex result(real * c.real - imag * c.imag, real * c.imag + c.real * imag);
		return result;
	}
	Complex operator=(const Complex& c)
	{
		if (this == &c)
			return *this;
		real = c.real;
		imag = c.imag;
		return *this;
	}
	friend ostream& operator<<(ostream& os, const Complex& c)
	{
		os << c.real << '+' << c.imag << 'i';
		return os;
	}
};

template <class T>

T power(T x, int n)
{
	T result = 1;
	for (int i = 0; i < n; ++i)
		result = result * x;
	return result;
}

#endif
