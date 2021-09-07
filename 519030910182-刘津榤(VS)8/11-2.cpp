#include<iostream>
using namespace std;

struct clock
{
	int hour;
	int minute;
	int second;
};

void setTime(clock* time)
{
	cout << "���������ڵ�ʱ,��,��:";
	cin >> time->hour >> time->minute >> time->second;
}

void increase(clock* time)
{
	++time->second;
	if (time->second >= 60)
	{
		++time->minute;
		time->second -= 60;
	}
	if (time->minute >= 60)
	{
		++time->hour;
		time->minute -= 60;
	}
	if (time->hour >= 60)
		time->hour -= 60;
}

void showtime(clock* time)
{
	cout << time->hour << ':' << time->minute << ':' << time->second << endl;
}

int main()
{
	void (*func[4])(clock*) = { setTime,increase,showtime,NULL };
	int choice;
	clock time;
	clock* Time = &time;
	do
	{
		cout << "��������Ҫ���еĲ���(0����ʱ�ӵ�ʱ�䣬1ģ��ʱ���ȥ��1�룬2��ʾ��ǰʱ��,3��������):";
		cin >> choice;
		if (choice == 3) break;
		func[choice](Time);
	} while (true);
	return 0;
}