#include<iostream>
using namespace std;
int main()
{
	double m, cost;
	constexpr double price1 = 1.5, price2 = 2;
	cout << "����������ˮ�����֣�:";
	cin >> m;
	cost = (m <= 10) ? price1 * m : price1 * 10 + price2 * (m - 10);
	cout << "ˮ��(Ԫ��:" <<cost<< endl;
	return 0;
}