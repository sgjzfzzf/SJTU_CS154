#include<iostream>
using namespace std;

class SavingAccount
{
private:
	int code;
	static int public_code;
	double deposit;
	static double rate;
	int year;
	int month;
	int date;
public:
	SavingAccount(double tmp1,int tmp2,int tmp3,int tmp4):deposit(tmp1),year(tmp2),month(tmp3),date(tmp4)
	{
		code = public_code;
		++public_code;
		cout << "账号为:" << code << endl;
	}
	static void reviserate()
	{
		cout << "输入新的月利率:";
		cin >> rate;
	}
	void calculate_deposit()
	{
		deposit *= (1 + rate);
		cout << "新的存款余额为:" << deposit << endl;
	}
	void print_deposit()
	{
		cout << "账户余额为:" << deposit << endl;
	}
};

int SavingAccount::public_code = 1;
double SavingAccount::rate = 0;

int main()
{
	SavingAccount user1(2000,1020,1,1), user2(10000,2018,5,1);
	SavingAccount::reviserate();
	user1.calculate_deposit();
	user2.print_deposit();
	return 0;
}