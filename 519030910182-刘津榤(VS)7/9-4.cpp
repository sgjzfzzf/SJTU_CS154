#include<iostream>
#include<cstring>
using namespace std;
const int mima[7] = { 8,7,3,4,9,6,2 };

char* encrypt(char* plain)
{
	int k = 0;
	for (int i = 0; i < strlen(plain); ++i)
	{
		plain[i] = (plain[i] + mima[k] - 32) % 91 + 32;
		k = (k + 1) % 7;
	}
	return plain;
}

char* decrypt(char* encrypt)
{
	int k = 0;
	for (int i = 0; i < strlen(encrypt); ++i)
	{
		if (encrypt[i] - mima[k] < 32)
			encrypt[i] = encrypt[i] - mima[k] + 91;
		else
			encrypt[i] -= mima[k];
		k = (k + 1) % 7;
	}
	return encrypt;
}

int main()
{
	char plain[100];
	cout << "Please input plain text:"; cin.getline(plain, 100);
	cout<<"Encrypt:"<<encrypt(plain) << endl;
	cout << "Decrypt:" << decrypt(plain) << endl;
	return 0;
}