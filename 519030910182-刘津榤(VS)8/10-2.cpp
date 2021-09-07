#include<iostream>
#include<cstring>
using namespace std;

char* mystrrchr(char* str, char ch)
{
	int code = -1;
	long int length = strlen(str);
	for (int i = 0; i < length; ++i)
		if (str[i] == ch) code = i;
	if (code == -1) return NULL;
	else return &str[code];
}

int main()
{
	char ch, str[80];
	cout << "ÇëÊäÈë×Ö·û´®:";
	cin.getline(str, 80);
	cout << "ÇëÊäÈë×Ö·û:"; cin >> ch;
	if (mystrrchr(str, ch) == NULL)
	{
		cout << "×Ö·û²»´æÔÚÓÚ×Ö·û´®ÖÐ" << endl;
		return 0;
	}
	else
	{
		char* p = mystrrchr(str, ch);
		int i = 0;
		while (*(p + i) != '\0')
		{
			cout << *(p + i);
			++i;
		}
		cout << endl;
		return 0;
	}
}
