#include<iostream>
using namespace std;

int main()
{
	int num, hundred, ten,one;
	cout << "������һ����λ����:" ;
	cin >> num;
	hundred = num / 100;
	ten = num%100/10;
	one = num%10;
	cout << num << "�İ�λ������" << hundred << ",ʮλ������" << ten << ",��λ������" << one << endl;
	return 0;
}