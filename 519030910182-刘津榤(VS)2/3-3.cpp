#include<iostream>
using namespace std;
int main()
{
	int m, n, rab, chi;
	cout << "������n��m:";
	cin >> n >> m;
	rab = (m - 2*n) / 2;
	chi = n - rab;
	if (rab * 4 + chi * 2 == m && rab >= 0 && chi >= 0) {
		cout << "��:" << chi << ",��:" << rab << endl;
	}
	else
		cout << "�޽�" << endl;
	return 0;
}