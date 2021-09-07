#include<iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	int z;
public:
	Point(int X, int Y, int Z) :x(X), y(Y), z(Z) {}
	Point() {}
	Point operator-()
	{
		return Point(-x, -y, -z);
	}
	friend ostream& operator <<(ostream& os, const Point& p)
	{
		os << "(" << p.x << "," << p.y << "," << p.z << ")";
		return os;
	}
	friend istream& operator >>(istream& is, Point& p)
	{
		is >> p.x >> p.y >> p.z;
		return is;
	}
};

int main()
{
	Point p1, p2;
	cin >> p1;
	p2 = -p1; 
	cout << p2 << endl;
	return 0;
}