#include<iostream>
using namespace std;
int main()
{
	int tho, hun, ten, one,num;
	char ch1, ch2, ch3, ch4;
	cout << "请输入一个四位数:";
	cin >> num;
	tho = num / 1000;
	hun = num%1000/100;
	ten = num%100/10;
	one = num%10;
	ch1 = tho + 12 + 'A';
	ch2 = hun + 12 + 'A';
	ch3 = ten + 12 + 'A';
	ch4 = one + 12 + 'A';
	cout << "加密输出:" <<ch1<<ch2<<ch3<<ch4<<endl;
	return 0;
}