#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "������һ����ĸ:";
	cin >> ch;
	if (ch <= 'Z' && ch >= 'A')
		ch = ch - 'A' + 'a';
	if (ch > 'z' || ch < 'a'){
		cout << "����Ӣ����ĸ" << endl;
	return 0;
	}
	switch (ch - 'a' + 1) {
	case 1:
	case 5:
	case 9:
	case 15:
	case 21:
		cout << "Ԫ��" << endl;
		break;
	default:
		cout << "����" << endl;
		break;
	}
	return 0;
}