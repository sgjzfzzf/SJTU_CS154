#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	int num1, num2, n, sum, Num[11] = { 0 };
	bool flag = true;
	cout << "请输入模拟的次数:"; cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; ++i) {
		num1 = rand() % 6 + 1;
		num2 = rand() % 6 + 1;
		sum = num1 + num2;
		++Num[sum - 2];
	}
	int max = Num[5];
	for (int i = 0; i < 11; ++i) {
		if (max < Num[i]) flag = false;
	}
	cout <<"num"<< '\t' << '2' << '\t' << '3' << '\t' << '4' << '\t' << '5' << '\t' << '6' << '\t' << '7' << '\t' << '8' << '\t' << '9' << '\t' << "10" << '\t' << "11" << '\t' << "12" << endl;
	cout << "sum:" << '\t';
	for (int i = 0; i < 11; ++i) cout << Num[i] << '\t';
	cout << endl;
	cout << (flag ? "right" : "false") << endl;
	return 0;
}