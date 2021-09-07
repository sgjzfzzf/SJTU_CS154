#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char files[80], ch;
	cout << "please input the file's name ";
	cin.getline(files, 80);
	ifstream in;
	in.open(files);
	int character = 0, number = 0, others = 0;
	while (in >> ch)
	{
		if (ch >= '0' && ch <= '9')
			number++;
		else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
			character++;
		else
			others++;
	}
	cout << "the character is " << character << endl;
	cout << "the number is " << number << endl;
	cout << "the others is " << others << endl;
	in.close();
	return 0;
}