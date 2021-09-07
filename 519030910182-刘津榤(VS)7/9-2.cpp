#include<iostream>
using namespace std;

int main()
{
	int n, k = 0, p = -1, th = 0;
	cout << "Please input n:"; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i)
		arr[i] = 0;
	do
	{
		p = (p + 1) % n;
		if (arr[p] == 3) continue;
		k = k % 3 + 1;
		if (k == 3) 
			++th; 
		arr[p] = k;
	} while (th < n - 1);
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] != 3) cout << "Last code:" << i+1;
	}
	delete[] arr;
	return 0;
}