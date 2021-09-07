#include<iostream>
using namespace std;

class Circle
{
private:
	double center_x = 0;
	double center_y = 0;
	double r = 0;
public:
	void getO();
	void getR();
	void setR();
	void moveTo(double x, double y);
	void display();
};

void Circle::getO()
{
	cout << "该圆圆心O所在的坐标为" << "(" << center_x << "," << center_y << ")" << endl;
}

void Circle::getR()
{
	cout << "该圆的半径R为" << r << endl;
}

void Circle::setR()
{
	cout << "请输入新的半径R:";
	cin >> r;
}

void Circle::moveTo(double x, double y)
{
	center_x = x;
	center_y = y;
}

void Circle::display()
{
	cout << "该圆圆心O所在的坐标为" << "(" << center_x << "," << center_y << ")" << "该圆的半径R为" << r << endl;
}

int main()
{
	Circle circle;
	int choice = -1;
	while (choice != 0)
	{
		cout << "请输入您的选择(0退出程序，1获取圆心，2获取半径，3设置半径，4移动圆的位置，5显示圆的信息):";
		cin >> choice;
		switch (choice)
		{
		case 0:
			continue;
		case 1:
			circle.getO(); break;
		case 2:
			circle.getR(); break;
		case 3:
			circle.setR(); break;
		case 4:
			cout << "请输入新的圆心的x,y:";
			double x, y;
			cin >> x >> y;
			break;
		case 5:
			circle.display();
			break;
		default:
			cout << "输入格式有误" << endl; break;
		}
	}
	return 0;
}