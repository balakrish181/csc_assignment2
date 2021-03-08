#include<iostream>

using namespace std;

class number
{
protected:
	int a[10];
public:
	virtual int AddArray() = 0;
	void init_array()
	{
		cout << "Enter 10 numbers:" << endl;
		for (int i = 0; i < 10; i++)
		{
			cin >> a[i];
		}
		cout << a << endl;
	}
};

class even:public number
{
public:
	int AddArray()
	{
		int sum = 0;
		for (int i = 0; i < 10; i++)
		{
			if (a[i] % 2 == 0)
			{
				sum += a[i];
			}
		}
		return sum;
	}
};


class odd:public number
{
public:
	int AddArray()
	{
		int sum = 0;
		for (int i = 0; i < 10; i++)
		{
			if (a[i] % 2 != 0)
			{
				sum += a[i];
			}
		}
		return sum;
	}
};


void main()
{
	even a;
	a.init_array();
	cout << "Sum of even numbers in the array is" << a.AddArray() << endl;
	odd b;
	b.init_array();
	cout << "Sum of odd numbers in the array is" << b.AddArray() << endl;

}