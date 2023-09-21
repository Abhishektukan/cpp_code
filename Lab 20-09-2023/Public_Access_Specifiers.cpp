#include<iostream>
using namespace std;
class A
{
	int c;
	public:
		int a;
	protected:
		int b;
   	public:
   		A()
		{
			cout<<"in default of A\n";
			a=10;
		}
		void dispaly()
		{
			cout<<a<<endl<<b<<endl;
		}
};
class B: public A
{
	public:
		B()
		{
			cout<<"in default of B\n";
			b=20;
		}
		void show()
		{
			cout<<a<<endl<<b<<endl;
		}
};

class C: public B
{
	c()
	{
		cout<<"in default of C \n";
	}
	public:
	void show1()
	{
		cout<<a<<endl<<b;
	}
};
int main()
{
	B b1;
	b1.show();
	b1.dispaly();
	C c1;
	c1.show();
	c1.show1();
	
}
