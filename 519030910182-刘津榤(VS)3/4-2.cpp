#include<iostream>
using namespace std;

int main()
{
	int K, one, two, five, method=0;
	cout << "Input the change:"; cin >> K;
	for (int i1 = 0; i1 <= (K - 8) / 5; ++i1) {
		five = i1 * 5;
		for (int i2 = 0; i2 <= (K - 8 - five ) / 2; ++i2) {
			two = i2 * 2;
			one = K - five - two-8 ;
			if (one >= 0) 
				++method;
		}
	}
	cout << "Methods=" << method << endl;
	return 0;
}