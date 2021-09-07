#include<iostream>
using namespace std;
int main()
{
	double m, cost;
	constexpr double price1 = 1.5, price2 = 2;
	cout << "请输入月用水量（吨）:";
	cin >> m;
	cost = (m <= 10) ? price1 * m : price1 * 10 + price2 * (m - 10);
	cout << "水费(元）:" <<cost<< endl;
	return 0;
}