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
	cout << "��ԲԲ��O���ڵ�����Ϊ" << "(" << center_x << "," << center_y << ")" << endl;
}

void Circle::getR()
{
	cout << "��Բ�İ뾶RΪ" << r << endl;
}

void Circle::setR()
{
	cout << "�������µİ뾶R:";
	cin >> r;
}

void Circle::moveTo(double x, double y)
{
	center_x = x;
	center_y = y;
}

void Circle::display()
{
	cout << "��ԲԲ��O���ڵ�����Ϊ" << "(" << center_x << "," << center_y << ")" << "��Բ�İ뾶RΪ" << r << endl;
}

int main()
{
	Circle circle;
	int choice = -1;
	while (choice != 0)
	{
		cout << "����������ѡ��(0�˳�����1��ȡԲ�ģ�2��ȡ�뾶��3���ð뾶��4�ƶ�Բ��λ�ã�5��ʾԲ����Ϣ):";
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
			cout << "�������µ�Բ�ĵ�x,y:";
			double x, y;
			cin >> x >> y;
			break;
		case 5:
			circle.display();
			break;
		default:
			cout << "�����ʽ����" << endl; break;
		}
	}
	return 0;
}