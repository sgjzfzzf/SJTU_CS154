#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x1, x2, y1, y2, distance;
	cout << "������x1,y1:";
	cin >> x1 >> y1;
	cout << "������x2,y2:";
	cin >> x2 >> y2;
	distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	cout << "(" << x1 << "," << y1 << ")��(" << x2 << "," << y2 << ")" << "֮��ľ���:" << distance;
	return 0;
}