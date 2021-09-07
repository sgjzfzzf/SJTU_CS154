#include<iostream>
using namespace std;

int main()
{
	int n, ar[20];
	cout << "Please imput n:"; cin >> n;
	cout << "Please input " << n << " intergers:";
	for (int i = 0; i < n; ++i) cin >> ar[i];
	bool flag = true;
	for (int k = n; k >= 0; --k) {
		for (int j = 0; j < k - 1; ++j) {
			if (ar[j] < ar[j + 1]) {
				ar[j] = ar[j] ^ ar[j + 1];
				ar[j + 1] = ar[j] ^ ar[j + 1];
				ar[j] = ar[j] ^ ar[j + 1];
				flag = false;
			}
		}
		if (flag == true) break;
	}
	cout << "Sorted sequence:";
	for (int i = 0; i < n; ++i) cout << ar[i] << " ";
	return 0;
}