#include<iostream>

using namespace std;

class graph
{
private:
	int x, y, z;
public:
	graph()
	{
		x = 0;
		y = 0;

		cout << "x=" << x <<"\t"<< "y=" << y<< endl;
	}

	graph(int a,int b)
	{
		x = 0;
		y = b;

		cout << "x=" << x <<"\t"<< "y=" << y << endl;
	}

	graph(int a, int b, int c)
	{
		x = 0;
		y = b;
		z = c;
		cout << "x="<< x <<"\t"<< "y=" << y <<"\t"<< "z=" << z << endl;
	}
};

void main()
{
	graph x;
	graph x1(2, 2);
	graph x2(2, 3, 4);
}