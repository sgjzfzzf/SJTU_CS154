#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "请输入一个字母:";
	cin >> ch;
	if (ch <= 'Z' && ch >= 'A')
		ch = ch - 'A' + 'a';
	if (ch > 'z' || ch < 'a'){
		cout << "不是英文字母" << endl;
	return 0;
	}
	switch (ch - 'a' + 1) {
	case 1:
	case 5:
	case 9:
	case 15:
	case 21:
		cout << "元音" << endl;
		break;
	default:
		cout << "辅音" << endl;
		break;
	}
	return 0;
}