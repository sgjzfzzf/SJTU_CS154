#include<iostream>
using namespace std;
int main()
{
	int x1, x2, x3, x4, sum;
	double average;
	cout << "请输入4个整型数:";
	cin >> x1 >> x2 >> x3 >> x4;
	sum = x1 + x2 + x3 + x4;
	average = sum / 4.0;
	cout << x1 << " " << x2 << " " << x3 << " " << x4 << "的平均值是:" << average << endl;
	return 0;
}