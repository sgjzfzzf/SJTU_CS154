#include<iostream>
using namespace std;
int main()
{
	int a, b, sum, quotient, product,mod;
	cout << "请输入两个整数:";
	cin >> a >> b;
	sum = a + b;
	product = a * b;
	quotient = a / b;
	mod = a % b;
	cout << a << "+" << b << "=" << sum<<endl;
	cout << a << "*" << b << "=" << product<<endl;
	cout << a << "/" << b << "=" << quotient << endl;
	cout << a << "%" << b << "=" << mod << endl;
	return 0;
}


/*不能，因为双精度的数据类型不能实现整除的运算*/