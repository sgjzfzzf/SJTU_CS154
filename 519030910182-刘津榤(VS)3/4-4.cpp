#include<iostream>
using namespace std;

int main()
{
	int n,l;
	cout << "��������1��11��Χ�ڵ�һ������:"; cin >> n;
	l = (n + 1) / 2;
	for (int i = 1; i <= l; ++i) {
		for (int noStar = 0; noStar < l - i; ++noStar)
			cout << " ";
		for (int star = 0; star < 2*i-1; ++star)
			cout << "*";
		cout << endl;
	}
	for (int i = 1; i <= l-1; ++i) {
		for (int noStar = 0; noStar < i; ++noStar)
			cout << " ";
		for (int star = 0; star < 2*(l-i)-1; ++star)
			cout << "*";
		cout << endl;
	}
}