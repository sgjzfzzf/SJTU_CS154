#include<iostream>
using namespace std;

class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	void settime()
	{
		cout << "��ֱ�����ʱ���֡���:";
		cin >> hour >> minute >> second;
	}
	void printtime()
	{
		cout << "������" << hour << "ʱ" << minute << "��" << second << "��" << endl;
	}
};

int main()
{
	int choice = -1;
	Time time;
	while (choice != 0)
	{
		cout << "��������ϣ�����еĲ���(0�˳�����1����ʱ�䣬2���ʱ�䣩:" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			break;
		case 1:
			time.settime(); break;
		case 2:
			time.printtime(); break;
		}
	}
	cout << "��лʹ��" << endl;
	return 0;
}