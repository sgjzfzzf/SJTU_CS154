#include<iostream>
using namespace std;

int main()
{
	char str[80];
	int count = 0;
	cout << "Please input a string:";
	cin.getline(str, 80);
	for (int i = 0; i < 80; ++i)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
			|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			++count;
	}
	cout << "Count =" << count << endl;
	return 0;
}