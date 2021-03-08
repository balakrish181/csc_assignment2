#include<iostream>

using namespace std;

class Calculate
{
protected:
	int N1, N2;
public:
	void set()
	{
		cout << "Calculation of GCD,LCM and Prime:" << endl;

		cout << "Enter two numbers:" << endl;
		cin >> N1 >> N2;
	}
};

class LCM:public Calculate
{
public:
	void Calci()
	{
		cout << "LCM of" << N1 << "and" << N2 << "is";
		int r,lcm,a,b;
		a = N1;
		b = N2;
		if (N1 < N2)
		{
			int c;
			c = N1;
			N1 = N2;
			N2 = c;
		}
		r = N1 % N2;
		while (r != 0)
		{
			N1 = N2;
			N2 = r;
			r = N1 % N2;
		}
		lcm = (a * b) / N2;
		cout << lcm << endl;
	}
};


class GCD :public Calculate
{
public:
	void Calci()
	{
		cout << "GCD of " << N1 << " and " << N2 << " is ";
		int r;
		if (N1 < N2)
		{
			int c;
			c = N1;
			N1 = N2;
			N2 = c;
		}
		r = N1 % N2;
		while (r != 0)
		{
			N1 = N2;
			N2 = r;
			r = N1 % N2;
		}
		cout << N2 << endl;

	}
};


class Prime :public Calculate
{
public:
	void Calci()
	{
		cout << N1 << " is ";
		int sum = 0;
		for (int i = 1; i <= (N1) / 2; i++)
		{
			if (N1 % i == 0)
			{
				sum += 1;
				break;
			}
		}
		if (sum == 0)
		{
			cout << " a prime number" << endl;
		}
		else if (sum == 1)
		{
			cout << "not a prime number" << endl;
		}
	}
};


void main()
{
	GCD a1;
	a1.set();
	a1.Calci();
	LCM a2;
	a2.set();
	a2.Calci();
	Prime a3;
	a3.set();
	a3.Calci();


}