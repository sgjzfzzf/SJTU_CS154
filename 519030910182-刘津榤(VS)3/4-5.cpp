#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	srand(time(NULL));
	int  ans1, ans2, ans3, a, b, ar1[3];
	do {ans1 = rand() % 10; ans2 = rand() % 10; ans3 = rand() % 10;
	} while (ans1 == ans2 || ans1 == ans3 || ans2 == ans3);
	int ar2[3] = { ans1,ans2,ans3 };//�����
	
	for (int i = 0; i < 7; ++i) {
		a = 0; b = 0;
		cout << "��������²������(����" << 7 - i << "�λ���):";
		for (int I = 0; I < 3; ++I)
			cin >> ar1[I];//������Ҳ���
		for (int i1 = 0; i1 < 3; ++i1) {
			if (ar1[i1] == ar2[i1])
				++a;//����A
			for (int i2 = 0; i2 < 3; ++i2) {
				if (ar1[i1] == ar2[i2])
					++b;
			}
		}
		b -= a;//����B
		cout << a << "A" << b << "B" << endl;

		if (a == 3) {
			cout << "��ϲ�㣬��¶��ˡ�" << endl;
			return 0;
		}//�����ֹ���
	}
	cout << "���ź�����û���ڹ涨�����ڲ¶ԡ���ȷ��ȷ����" << ans1 << ans2 << ans3 << "��" << endl;//������
	return 0;
}
