#include<iostream>
using namespace std;

class Vector
{
private:
	int* p;
	int n;
public:
	Vector(int N) :n(N)
	{
		p = new int[n];
	}
	friend ostream& operator<<(ostream& os, const Vector tmp)
	{
		os << "(" << tmp.p[0];
		for (int i = 1; i < tmp.n; ++i)
			os << "," << tmp.p[i];
		os << ")";
		return os;
	}
	friend istream& operator>>(istream& is, Vector tmp)
	{
		for (int i = 0; i < tmp.n; ++i)
			is >> tmp.p[i];
		return is;
	}
	Vector operator + (const Vector tmp)
	{
		Vector tmq(n);
		if (n != tmp.n)
		{
			cout << "�Բ�����������ά����ͬ" << endl;
			return NULL;
		}
		else
		{
			for (int i = 0; i < n; ++i)
				tmq.p[i] = p[i] + tmp.p[i];
			return tmq;
		}
	}
	Vector operator - (const Vector tmp)
	{

		if (n != tmp.n)
		{
			cout << "�Բ�����������ά����ͬ" << endl;
			return NULL;
		}
		else
		{
			Vector tmq(n);
			for (int i = 0; i < n; ++i)
				tmq.p[i] = p[i] - tmp.p[i];
			return tmq;
		}
	}
	int operator * (Vector tmp)
	{

		if (n != tmp.n)
		{
			cout << "�Բ�����������ά����ͬ" << endl;
			return NULL;
		}
		else
		{
			int mult = 0;
			for (int i = 0; i < n; ++i)
				mult += (p[i] * tmp.p[i]);
			return mult;
		}
	}
};

int main()
{
	int n;
	cout << "��������Ҫ����������������ά��:";
	cin >> n;
	Vector v1(n), v2(n);
	cout << "������������������:";
	cin >> v1 >> v2;
	Vector v3 = v1 + v2, v4 = v1 - v2;
	int mult = v1 * v2;
	cout << "������֮��Ϊ" << v3 << endl;
	cout << "������֮��Ϊ" << v4 << endl;
	cout << "������֮��Ϊ" << mult << endl;
	return 0;
}