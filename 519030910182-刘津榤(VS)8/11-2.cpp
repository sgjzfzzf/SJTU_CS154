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
	cout << "请输入现在的时,分,秒:";
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
		cout << "请输入你要进行的操作(0设置时钟的时间，1模拟时间过去了1秒，2显示当前时间,3结束操作):";
		cin >> choice;
		if (choice == 3) break;
		func[choice](Time);
	} while (true);
	return 0;
}