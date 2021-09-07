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
	int ar2[3] = { ans1,ans2,ans3 };//储存答案
	
	for (int i = 0; i < 7; ++i) {
		a = 0; b = 0;
		cout << "请输入你猜测的数字(还有" << 7 - i << "次机会):";
		for (int I = 0; I < 3; ++I)
			cin >> ar1[I];//储存玩家猜想
		for (int i1 = 0; i1 < 3; ++i1) {
			if (ar1[i1] == ar2[i1])
				++a;//计算A
			for (int i2 = 0; i2 < 3; ++i2) {
				if (ar1[i1] == ar2[i2])
					++b;
			}
		}
		b -= a;//计算B
		cout << a << "A" << b << "B" << endl;

		if (a == 3) {
			cout << "恭喜你，你猜对了。" << endl;
			return 0;
		}//答对中止输出
	}
	cout << "很遗憾，你没有在规定次数内猜对。正确正确答案是" << ans1 << ans2 << ans3 << "。" << endl;//答错输出
	return 0;
}
