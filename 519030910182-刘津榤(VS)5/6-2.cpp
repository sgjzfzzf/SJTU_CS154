#include<iostream>
using namespace std;

int main()
{
	char str[80], ch;
	int index=0;
	bool flag = false;
	cout << "Please input a string:";
	cin.get(str, 80);
	cout << "Please input a character:";
	cin >> ch;
	for (int i = 0; i < 80; ++i)
	{
		if (str[i] == ch)
		{
			index=i;
			flag = true;
		}
	}
	if (flag == false)
		cout << "Not Found" << endl;
	else
		cout << "Index =" << index << endl;
	return 0;
}
