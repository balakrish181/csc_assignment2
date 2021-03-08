#include<iostream>

using namespace std;


int gross_salary;

class Wages
{
protected:
	int BP, DA, HRA, PF;
public:
	void calculation1()
	{
		cout << "Enter BP,DA,HRA,PF " << endl;
		cin >> BP >> DA >> HRA >> PF;
		gross_salary = BP + DA + HRA - PF;

	}

};

class ExecSalary:public Wages
{
protected:
	
public:
	void addbonus()
	{
		int Bonus;
		cout << "Enter the bonus amount:" << endl;
		cin >> Bonus;
		gross_salary += Bonus;

	}

};

class VPSalary :public ExecSalary
{
protected:
	int Vp;
public:
	void addvp()
	{
		BP = 0.05 * BP;
		gross_salary += BP;
		
};
class AccSalary1:public Wages
{
protected:
	int OT, final;
public:
	void overtime(int rate, int hours)
	{
		OT = 500 * hours * rate;
		final =gross_salary + OT;

	}
	void display()
	{
		cout << "Final Salary is:" << final << endl;
	}
};

void main()
{
	AccSalary1 emp;
	emp.calculation1();
	emp.addbonus();
	emp.addvp();
	emp.overtime(0.2, 10);
	emp.display();
}