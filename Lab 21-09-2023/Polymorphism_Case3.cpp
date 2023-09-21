#include<iostream>
using namespace std;

class Emp
{
  int id;
  public:
        Emp();
		Emp(int);
		void display();
		virtual int findsalary();
};

Emp::Emp()
{
	cout<<"\nDefault of Emp";
	id=0;
}
Emp::Emp(int i)
{
	cout<<"\nPara of Emp";
	id=i;
}
void Emp::display()
{
	cout<<"\nId of emp : "<<id;
}
int Emp::findsalary()
{
	return 0;
}
class Wagemp:public Emp
{
	int hrs;
	int rate;
	public:
		Wagemp();
		Wagemp(int,int,int);
		void display();
		virtual int findsalary();
};

Wagemp::Wagemp()
{
	cout<<"\nDefault of Wagemp";
	hrs=0;
	rate=0;
}

Wagemp::Wagemp(int i,int h,int r):Emp(i)
{
	cout<<"\nPara of Wagemp";
	hrs=h;
	rate=r;
}
int Wagemp::findsalary()
{
	return hrs * rate;
}
void Wagemp::display()
{
	Emp::display();
	cout<<"Hrs : "<<hrs<<"Rate : "<<rate;
}

class Salesmanager:public Wagemp
{
	int sale;
	int comm;
	public:
		Salesmanager();
		Salesmanager(int,int,int,int,int);
		void display();
		virtual int findsalary();
};
Salesmanager::Salesmanager()
{
	cout<<"\nDefault of Salesmanager";
	sale=0;
	comm=0;
}

Salesmanager::Salesmanager(int i,int h,int r,int s,int c):Wagemp(i,h,r)
{
	cout<<"\nPara of Salesmanager";
	sale=s;
	comm=c;
}

void Salesmanager::display()
{
	Wagemp::display();
	cout<<"\nSales : "<<sale;
    cout<<"\nComm : "<<comm;
}

int Salesmanager::findsalary()
{
	return (Wagemp::findsalary()) + sale * comm;
}

int main()
{
	Emp *ptr;
	Emp e1(1);
	ptr= &e1;
	cout<<"\nSalary : "<<ptr->findsalary();
	
	ptr;
	Wagemp w1(1,100,50);
	ptr= &w1;
	cout<<"\nSalary : "<<ptr->findsalary();
	
	ptr;
	Salesmanager s1(1,100,50,300,60);
	ptr= &s1;
	cout<<"\nSalary : "<<ptr->findsalary();

}
