#include<iostream>
#include<cstdio>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int answer, number;
	answer = rand() % 100 + 1;
	char ch = 'y';
	while (ch == 'y')
	{
		cout << "I have a number between 1 and 100." << endl;
		cout << "Please input your guess:"; cin >> number;
		while (number != answer)
		{
			if (number > answer)
			{
				cout << "Too high!Try again:"; cin >> number;
			}
			else
			{
				cout << "Too low!Try again:"; cin >> number;
			}
		}
		cout << "Excellent!You guessed the number!" << endl;
		cout << "Would you like to play again(y or n)?" << endl;
		cin >> ch;
	}
	return 0;
}