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
	cout << "��ֱ�����ʵ�����鲿:";
	cin >> a.real >> a.imaginary;
	cout << "��ֱ�����ʵ�����鲿:";
	cin >> b.real >> b.imaginary;
	int choice;
	cout << "��������е�����(0����ӷ���1����˷�):"; cin >> choice;
	if (choice == 0)
		c = Plus(a, b);
	else if (choice == 1)
		c = Multiply(a, b);
	else
	{
		cout << "�����ʽ����" << endl;
		return 0;
	}
	cout << "��Ϊ" << c.real << "+" << c.imaginary << "i" << endl;
	return 0;
}