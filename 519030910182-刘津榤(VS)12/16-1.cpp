#include"head.h"

int main()
{
	int a = 2;
	double b = 1.2;
	Rational c(3, 2);
	Complex d(1, 1);
	cout << power(a, 10) << endl;
	cout << power(b, 10) << endl;
	cout << power(c, 10) << endl;
	cout << power(d, 10) << endl;
	return 0;
}