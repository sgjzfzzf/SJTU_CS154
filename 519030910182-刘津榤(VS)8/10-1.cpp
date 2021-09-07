#include<iostream>
#include<cstring>
using namespace std;

int minlen(char* str[], int n)
{
	int length = 0;
	for (int i = 0; i < n; ++i)
	{
		if (strlen(str[i]) > length) length = strlen(str[i]);
	}
	return length;
}

int main()
{
	int n;
	cout << "�������ַ����ĸ���:";
	cin >> n;
	cin.get();
	char** str;
	str = new char* [n];
	for (int i = 0; i < n; ++i)
		str[i] = new char[80];
	for (int i = 0; i < n; ++i)
		cin.getline(str[i], 80);
	cout << minlen(str, n) << endl;
	for (int i = 0; i < n; ++i)
		delete[] str[i];
	delete[] str;
	return 0;
}
