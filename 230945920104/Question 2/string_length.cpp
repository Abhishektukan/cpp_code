#include<iostream>
using namespace std;
int ustrlen(char*p);

int main()
{
	char *a = new char[16];
    int len;
	cout<<"Enter your String1=";
	cin>>a;
    len=ustrlen(a);
    cout<<"\nLength of string = "<<len;
    
	delete[] a;
	cout<<"\n String After delete opeartion - "<<a;
}
int ustrlen(char*p)
{
    int len=0;
	while(*p!='\0')
	{
        len++;
		p++;
	}
         return len;
         
}
