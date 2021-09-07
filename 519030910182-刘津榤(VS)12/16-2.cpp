#include<iostream>
using namespace std;

class Rational
{
private:
	int num;
	int den;
public:
	Rational(int N, int D) :num(N), den(D) {};
	bool operator<(const Rational& r)
	{
		return num * r.den < den * r.num;
	}
	bool operator>(const Rational& r)
	{
		return num * r.den > den * r.num;
	}
	bool operator<=(const Rational& r)
	{
		return num * r.den <= den * r.num;
	}
	bool operator>=(const Rational& r)
	{
		return num * r.den >= den * r.num;
	}
	bool operator==(const Rational& r)
	{
		return num * r.den == den * r.num;
	}
	friend ostream& operator<<(ostream& os, const Rational& r)
	{
		os << r.num << '/' << r.den;
		return os;
	}
};

template<class T>

void sort(T arr[], int n)
{
	for (int j = 0; j < n; ++j)
	{
		T k = arr[j];
		int K = j;
		for (int i = j; i < n; ++i)
		{
			if (arr[i] < k)
			{
				k = arr[i];
				K = i;
			}
		}
		T tmp = arr[K];
		arr[K] = arr[j];
		arr[j] = tmp;
	}
}

int main()
{
	int arr[10] = { 9,8,7,6,11,4,3,2,1,0 };
	Rational Arr[5] = { Rational(1,2),Rational(2,5),Rational(10,3),Rational(2,9),Rational(7,8) };
	sort(arr, 10);
	sort(Arr, 5);
	for (int i = 0; i < 10; ++i)
		cout << arr[i] << ' ';
	cout << endl;
	for (int i = 0; i < 5; ++i)
		cout << Arr[i] << ' ';
	cout << endl;
	return 0;
}