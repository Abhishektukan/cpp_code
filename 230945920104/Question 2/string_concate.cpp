#include<iostream>
using namespace std;

void strconcat(char*p,char*q);
int main()
{
	char *a = new char[16];
	char *b = new char[16];
	cout<<"Enter your String1 =";
	cin>>a;
	cout<<"Enter your String2 =";
	cin>>b;
	strconcat(a,b);
	cout<<" Concate String : "<<a;
	delete[] a;
    cout<<" /After Delete Opeartion = \t a="<<a;
	
	return 0;
}
 void strconcat(char*p,char*q)
 {
 	while(*p!='\0')
 	{p++;}
 	
 	while(*q!='\0')
	 {
 		*p=*q;
 		p++;
 		q++;
	 }	
 }
