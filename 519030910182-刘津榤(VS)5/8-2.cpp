#include<iostream>
using namespace std;

bool perfectNumber(int x)
{
	int sum = 0;
	for (int i = 1; i <= x / 2; ++i)
	{
		if (x % i == 0)
			sum += i;
	}
	if (sum == x)
		return true;
	else
		return false;
}

int main()
{
	int m, n, number;
	bool flag = false;
	cout << "Please input m,n:";
	cin >> m >> n;
	cout << "Perfect number in [" << m << "," << n << "] :";
	for (int i = m; i <= n; ++i)
	{
		if (perfectNumber(i))
		{
			cout << i << ' ';
			flag = true;
		}
	}
	if (flag == false)
		cout << "None";
	cout << endl;
	return 0;
}