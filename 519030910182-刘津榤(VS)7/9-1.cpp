#include<iostream>
using namespace std;

int search(int *arr, int n, int key)
{
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == key) return i;
	}
	return -1;
}

int main()
{
	int n, key, index;
	cout << "Please input n:"; cin >> n;
	int *arr = new int[n];
	cout << "Please input " << n << " intergers:" ;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	cout << "Please input key:"; cin >> key;
	index = search(arr, n, key) ;
	if (index == -1) cout << "Not Found";
	else cout << "Index=" << index << endl;
	delete [] arr;
	return 0;
}