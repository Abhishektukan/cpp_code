#include<iostream>
using namespace std;

void ustrcpy(char*p,char*q);

int main()
{
	char *a = new char[16];
	char *b = new char[16];
	cout<<"Enter your String =";
	cin>>a;
    ustrcpy(b,a);
    cout<<"Copied string : "<<b;
    delete[] a;
    cout<<"\nAfter Delete Opeartion : \t a="<<a;
}
void ustrcpy(char*q,char*p)
{
	while(*p!='\0')
	{
		*q=*p;
		p++;
	    q++;
	}
}
