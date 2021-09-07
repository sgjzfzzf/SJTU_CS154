#include<iostream>
#include<cstring>
using namespace std;

struct LongLongInt
{
private:
	char* p;
	int length;
public:
	LongLongInt(char* tmp):p(tmp)
	{
		length = strlen(p);
	}
	LongLongInt(const char* tmp) 
	{
		p = new char[strlen(tmp) + 1];
		for (int i = 0; i < strlen(tmp); ++i)
		{
			p[i] = tmp[i];
		}
		p[strlen(tmp)] = '\0';
		length = strlen(tmp) ;
	}
	LongLongInt(const LongLongInt &tmp)
	{
		p = tmp.p;
		length = tmp.length;
	}
	LongLongInt add(LongLongInt x);
	void display();
};

LongLongInt LongLongInt::add(LongLongInt x)
{
	char* str, * tmp, * num1, * num2;
	int Long;
	if (length > x.length)
	{
		Long = length;
		num1 = new char[Long + 2];
		num2 = new char[Long + 2];
		for (int i = 1; i < Long + 2; ++i)
			num1[i] = p[i - 1];
		for (int i = Long + 1; i > length - x.length; --i)
			num2[i] = x.p[i - length + x.length-1];
		for (int i = 0; i <= length - x.length; ++i)
			num2[i] = '0';
		num1[0] = '0';
		num1[Long + 1] = num2[Long + 1] = '\0';
	}
	else 
	{
		Long = x.length;
		num1 = new char[Long + 2];
		num2 = new char[Long + 2];
		for (int i = 1; i < Long + 2; ++i)
			num1[i] = x.p[i - 1];
		for (int i = Long + 1; i > x.length - length; --i)
			num2[i] = p[i - x.length + length-1];
		for (int i = 0; i <= x.length - length ; ++i)
			num2[i] = '0';
		num1[0] = '0';
		num1[Long + 1] = num2[Long + 1] = '\0';
	}
	str = new char[Long + 2];
	str[Long + 1] = '\0';
	for (int i = 0; i <= Long; ++i)
	{
		str[i] = '0';
	}
	for (int i = Long ; i > 0; --i)
	{
		int sum;
		sum = num1[i] + num2[i] - 2 * '0';
		str[i] += sum;
		if (str[i] >= 10+'0')
		{
			str[i] -= 10;
			str[i - 1]++;
		}
	}
	if (str[0] == '0')
	{
		tmp = new char [Long + 1];
		for (int i = 0; i <= Long; ++i)
			tmp[i] = str[i + 1];
	}
	else
	{
		tmp = new char[Long + 2];
		for (int i = 0; i < Long + 2; ++i)
			tmp[i] = str[i];
	}
	LongLongInt y(tmp);
	delete[] str;
	delete[] num1;
	delete[] num2;
	return y;
}

void LongLongInt::display()
{
	for (int i = 0; i < length; ++i)
	{
		cout << p[i];
	}
	cout << endl;
}

int main()
{
	LongLongInt num1("12839128338293"), num2("381920830912831092");
	cout << "他们的和是:";
	num1.add(num2).display();
	return 0;
}