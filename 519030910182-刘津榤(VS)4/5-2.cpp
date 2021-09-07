#include<iostream>
using namespace std;

int main()
{
	int m, n, mat[10][10];
	cout << "Please input m,n:"; cin >> m >> n;
	cout << "Please input array:" << endl;
	for (int i1 = 0; i1 < m; ++i1) 
	{
		for (int i2 = 0; i2 < n; ++i2)
			cin >> mat[i1][i2];
	}
	bool Flag = true;
	for (int i1 = 0; i1 < m; ++i1) 
	{
		for (int i2 = 0; i2 < n; ++i2) 
		{
			bool flag = true;
			for (int j1 = 0; j1 < m; ++j1) 
			{
				if (mat[i1][i2] > mat[j1][i2]) 
				{
					flag = false; break;
				}
			}
			for (int j2 = 0; j2 < n; ++j2) 
			{
				if (mat[i1][i2] < mat[i1][j2]) 
				{
					flag = false; break;
				}
			}
			if (flag == true) 
			{
				cout << "mat[" << i1 << "][" << i2 << "]=" << mat[i1][i2] << endl;
				Flag = false;
			}
		}
	}
	if (Flag == true) cout << "Not Found" << endl;
	return 0;
}
