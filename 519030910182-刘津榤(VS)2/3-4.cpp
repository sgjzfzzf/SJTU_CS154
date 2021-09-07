#include<iostream>
using namespace std;

int main()
{
	double x1, x2, x3, y1, y2, y3;
	cout << "x1,y1:" ; cin >> x1 >> y1;
	cout << "x2,y2:" ; cin >> x2 >> y2;
	cout << "x3,y3:" ; cin >> x3 >> y3;
	cout << ((x2 - x1) * (y3 - y2) == (x3 - x2) * (y2 - y1) ? "Yes" : "No") << endl;
	return 0;
}