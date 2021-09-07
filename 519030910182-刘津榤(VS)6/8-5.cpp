#include <iostream>
using namespace std;

int max(int arr[], int size)
{
	int k = 0;
	if (size == 1) return arr[0];
	else if (size == 2) return (arr[0] > arr[1] ? arr[0] : arr[1]);
	else {
		for (int i = 0; i < size; i += 2)
		{
			if (i == size - 1)
			{
				arr[k] = arr[i]; ++k;
			}
			else
			{
				arr[k] = (arr[i] > arr[i + 1] ? arr[i] : arr[i + 1]); ++k;
			}
		}
		max(arr, k);
	}
}

int main()
{
	int size, arr[100];
	cout << "Please input size,array:";
	cin >> size;
	for (int i = 0; i < size; ++i)
		cin >> arr[i];
	cout << max(arr, size) << endl;
	return 0;
}