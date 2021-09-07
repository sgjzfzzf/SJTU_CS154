#include<iostream>
#include<cstring>
using namespace std;

char* int_to_string(int num)
{
	char* Num;
	if (num >= 0 && num <= 9) 
	{
		Num = new char[2];
		Num[0] = num + '0';
		Num[1] = '\0';
	}
	else
	{
		Num = new char[3];
		Num[0] = num / 10 + '0';
		Num[1] = num % 10 + '0';
		Num[2] = '\0';
	}
	return Num;
}

bool isRunNian(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return true;
	else return false;
}

char* julian(int year, int day)
{
	const char* Months[] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec",'\0' };
	int month = 0, months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (isRunNian(year)) months[1] = 29;
	while (day - months[month] > 0)
	{
		day -= months[month]; ++month;
	}
	char* R, * ex = int_to_string(day);
	R = new char[5 + strlen(ex)]; 
	for (int i = 0; i < 3; ++i)
		R[i] = Months[month][i];
	for (int i = 3; i < 3 + strlen(ex); ++i)
		R[i] = ex[i - 3];
	R[3 + strlen(ex)] = '\0';
	delete[] ex;
	return R;
}

int main()
{
	int year, day;
	cout << "Please input year and days:"; cin >> year >> day;
	cout << julian(year, day) << endl;
	return 0;
}
