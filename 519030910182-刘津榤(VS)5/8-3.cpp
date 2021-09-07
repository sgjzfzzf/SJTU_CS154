#include<iostream>
using namespace std;

void printInt(int n, int base)
{
	int arr[20];
	int x = 0;
	cout << n << "(" << base << ")=";
	while (n / base > 0)
	{
		arr[x] = n % base;
		n /= base;
		++x;
	}
	arr[x] = n;
	for (int i = x; i >= 0; --i)
		if (arr[i] < 10)
			cout << arr[i];
		else
		{
			switch (arr[i])
			{
			case 10:
				cout << 'A'; break;
			case 11:
				cout << 'B'; break;
			case 12:
				cout << 'C'; break;
			case 13:
				cout << 'D'; break;
			case 14:
				cout << 'E'; break;
			case 15:
				cout << 'F'; break;
			}
				
		}
	cout << "(" << base << ")" << endl;
}

int main()
{
	int n, base;
	cout << "Please input n,base:";
	cin >> n >> base;
	printInt(n, base);
	return 0;
}
