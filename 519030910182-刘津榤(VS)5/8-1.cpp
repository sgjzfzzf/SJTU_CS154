#include<iostream>
using namespace std;

bool isPrime(int n)
{
	bool flag = true;
	if (n == 1)
		flag = false;
	else {
		for (int i = 2; i <= n / 2; ++i)
		{
			if (n % i == 0)
			{
				flag = false;
				break;
			}
		}
	}
	return flag;
}

int main()
{
	int m, n, count = 0;
	cout << "Please input m,n:";
	cin >> m >> n;
	for (int i = m; i <= n; ++i)
	{
		if (isPrime(i))
			++count;
	}
	cout << "Count =" << count << endl;
	return 0;
}