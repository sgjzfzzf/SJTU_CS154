#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	in.open("hello.cpp");
	out.open("hello_linenum.cpp");
	char str[500];
	int i = 0;
	while (in.getline(str,500))
	{
		++i;
		out << i << ' ' << str << '\n';
	}
	in.close();
	out.close();
	return 0;
}