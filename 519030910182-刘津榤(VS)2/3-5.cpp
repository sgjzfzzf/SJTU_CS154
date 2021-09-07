#include<iostream>
using namespace std;
int main()
{
	int num, wan, qian, bai, shi, ge;
	cout << "请输入一个5位的整数:"; cin >> num;
	wan = num / 1e4;
	qian = (num - wan * 1e4)/1e3;
	bai = (num - wan * 1e4 - qian * 1e3) / 1e2;
	shi = (num - wan * 1e4 - qian * 1e3 - bai * 1e2) / 10;
	ge = num - wan * 1e4 - qian * 1e3 - bai * 1e2 - shi * 10;
	cout << (wan == ge && qian == shi ? "Yes" : "No") << endl;
	return 0;
}