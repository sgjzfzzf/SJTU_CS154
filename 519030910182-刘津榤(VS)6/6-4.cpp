#include<iostream>
using namespace std;

int main()
{
	int n, number=0, character=0, others=0;
	cout << "请输入行数:"; cin >> n; cin.get();
	char article[10][80] ;
	for (int i = 0; i < n; ++i)
		cin.getline(article[i], 80);
	for (int i = 0; i < n; ++i) 
	{
		for (int j = 0; j < 80; ++j)
		{
			if ((article[i][j] >= 'a' && article[i][j] <= 'z') || (article[i][j] >= 'A' && article[i][j] <= 'Z'))
				++character;
			else if (article[i][j] >= '0' && article[i][j] <= '9')
				++number;
			else if (article[i][j] == ' ')
				continue;
			else if (article[i][j] == '\0')
				break;
			else
				++others;
		}
	}
	cout << "英文字母:" << character;
	cout << "数字:" << number;
	cout << "其他字符:" << others;
	return 0;
}