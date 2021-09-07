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
		cout << "请分别输入时、分、秒:";
		cin >> hour >> minute >> second;
	}
	void printtime()
	{
		cout << "现在是" << hour << "时" << minute << "分" << second << "秒" << endl;
	}
};

int main()
{
	int choice = -1;
	Time time;
	while (choice != 0)
	{
		cout << "请输入您希望进行的操作(0退出程序，1设置时间，2输出时间）:" << endl;
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
	cout << "感谢使用" << endl;
	return 0;
}