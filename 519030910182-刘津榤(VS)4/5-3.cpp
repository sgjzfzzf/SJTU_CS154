#include<iostream>
using namespace std;

int main()
{
	int n, k;
	bool light[1000] = { false };
	cin >> n >> k;
	for (int i = 1; i <= k; ++i) {
		for (int j = i; j <= n; j += i)  light[j-1] = !(light[j-1]);
	}
	for (int k = 0; k < n;++k) {
		if (light[k] == true) cout << k + 1 << ' ';
	}
	return 0;
}