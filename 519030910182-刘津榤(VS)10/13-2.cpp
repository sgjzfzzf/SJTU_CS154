#include<iostream>
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };

class CPU
{
private:
	CPU_Rank rank;
	int frequency;
	double voltage;
public:
	CPU(CPU_Rank R, int F, int V):rank(R) ,frequency(F) , voltage(V)
	{
		cout << "正在构造一个CPU" << endl;
	};
	~CPU()
	{
		cout << "正在析构一个CPU" << endl;
	};
	void run();
	void stop();
};

void CPU::run()
{
	cout << "CPU正在运行" << endl;
}

void CPU::stop()
{
	cout << "CPU停止运行" << endl;
}

int main()
{
	CPU cpu(P1, 50, 5.0);
	cpu.run();
	cpu.stop();
	return 0;
}