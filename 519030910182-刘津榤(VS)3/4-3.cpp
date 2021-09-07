#include<iostream>
using namespace std;

int main()
{
	int n, sum = 0, item = 1;
	for (int i = 1; i <= 10; ++i) {
		item *= i;
		sum += item;
	}
	cout << "sum=" << sum << endl;
	return 0;
}