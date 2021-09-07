#include<iostream>
using namespace std;
int main()
{
	int m, n, rab, chi;
	cout << "ÇëÊäÈën£¬m:";
	cin >> n >> m;
	rab = (m - 2*n) / 2;
	chi = n - rab;
	if (rab * 4 + chi * 2 == m && rab >= 0 && chi >= 0) {
		cout << "¼¦:" << chi << ",ÍÃ:" << rab << endl;
	}
	else
		cout << "ÎÞ½â" << endl;
	return 0;
}