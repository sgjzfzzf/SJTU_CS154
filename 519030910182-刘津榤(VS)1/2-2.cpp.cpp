#include<iostream>
using namespace std;
int main()
{
	int x1, x2, x3, x4, sum;
	double average;
	cout << "������4��������:";
	cin >> x1 >> x2 >> x3 >> x4;
	sum = x1 + x2 + x3 + x4;
	average = sum / 4.0;
	cout << x1 << " " << x2 << " " << x3 << " " << x4 << "��ƽ��ֵ��:" << average << endl;
	return 0;
}