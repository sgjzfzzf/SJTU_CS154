#include<iostream>
using namespace std;

int main()
{
	int num, hundred, ten,one;
	cout << "请输入一个三位整数:" ;
	cin >> num;
	hundred = num / 100;
	ten = num%100/10;
	one = num%10;
	cout << num << "的百位数字是" << hundred << ",十位数字是" << ten << ",个位数字是" << one << endl;
	return 0;
}