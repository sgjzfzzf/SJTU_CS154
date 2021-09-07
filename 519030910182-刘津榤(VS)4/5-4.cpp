#include<iostream>
using namespace std;

int main()
{
	int n, date[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 },
		Date[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 },  day = 13,
		weekday[7] = { 0 };
	cin >> n;
	for (int i = 0; i < n; ++i) 
	{
		if ((i % 4 == 0 && i % 100 != 0) || i == 100) 
		{
			for (int j = 0; j < 12; ++j) 
			{
				++weekday[day % 7];
				day += Date[j];
			}
		}
		else
		{
			for (int j = 0; j < 12; ++j) 
			{
				++weekday[day % 7];
				day += date[j];
			}
		}
	}
	for (int i = 0; i < 7; ++i)
		cout << weekday[(i + 1) % 7] << ' ';
	cout << endl;
	return 0;
}