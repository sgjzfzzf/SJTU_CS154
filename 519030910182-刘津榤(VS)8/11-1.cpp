#include<iostream>
using namespace std;

struct complex
{
	int real;
	int imaginary;
};

complex Plus(complex a, complex b)
{
	complex c;
	c.real = a.real + b.real;
	c.imaginary = a.imaginary + b.imaginary;
	return c;
}

complex Multiply(complex a, complex b)
{
	complex c;
	c.real = a.real * b.real - a.imaginary * b.imaginary;
	c.imaginary = a.imaginary * b.imaginary + a.real * b.real;
	return c;
}

int main()
{
	complex a, b, c;
	cout << "请分别输入实部和虚部:";
	cin >> a.real >> a.imaginary;
	cout << "请分别输入实部和虚部:";
	cin >> b.real >> b.imaginary;
	int choice;
	cout << "请输入进行的运算(0代表加法，1代表乘法):"; cin >> choice;
	if (choice == 0)
		c = Plus(a, b);
	else if (choice == 1)
		c = Multiply(a, b);
	else
	{
		cout << "输入格式有误" << endl;
		return 0;
	}
	cout << "答案为" << c.real << "+" << c.imaginary << "i" << endl;
	return 0;
}