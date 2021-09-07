#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int sum = 0, a, n;
	cout << "Input a,n:";
	cin >> a >> n;
	for (int i1 = 0; i1 < n; ++i1)
		for (int i2 = 0; i2 <= i1; ++i2)
			sum += a * pow(10, i2);
	cout << "Sum=" << sum;
	return 0;
}