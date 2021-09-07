#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[80], ch[80];
	int k = 0;
	cin.get(str, 80);

	for (int i = 0; i < strlen(str); ++i)
	{
		bool flag = true;
		for (int j = 0; j < i; ++j) {
			if (str[i] == str[j])
			{
				flag = false;
				break;
			}
		}
		if (flag == true)
		{
			ch[k] = str[i];
			++k;
		}
	}

	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (ch[i] > ch[j])
			{
				ch[i] = ch[i] ^ ch[j]; ch[j] = ch[i] ^ ch[j]; ch[i] = ch[i] ^ ch[j];
			}
		}
	}

	for (int i = 0; i < k; ++i)
		cout << ch[i] ;
	cout << endl;
	return 0;
}