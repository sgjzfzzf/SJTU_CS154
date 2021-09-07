#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in1, in2;
	in1.open("Text1.txt");
	in2.open("Text2.txt");
	char ch1, ch2;
	int line = 1, row = 1;
	bool flag;
	while (true)
	{
		ch1 = in1.get();
		ch2 = in2.get();
		if (ch1 == EOF && ch2 == EOF)
		{
			flag = true;
			break;
		}
		else if (ch1 != ch2)
		{
			flag = false;
			break;
		}
		else
		{
			++row;
			if (ch1 == '\n')
			{
				row = 1;
				line++;
			}
		}
	}
	if (flag == true)
		cout << "The Two Files are Eqaul." << endl;
	else
		cout << "the line is " << line << ",the row is " << row << endl;
	in1.close();
	in2.close();
	return 0;
}