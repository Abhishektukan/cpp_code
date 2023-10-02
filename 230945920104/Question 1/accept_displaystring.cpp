#include<iostream>
using namespace std;
#include<string.h>
class string1{
	int len;
	char*ptr;
	public:
		void acceptstring();
		string1(char*);
		void stringdisplay();
		string1(char*,char*);
	
};
string1::string1(char*sptr){
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}
string1::string1(char* p, char* q)
{
	int i;
	for(i=0; *p!='\0';i++)
	{
		p++;
	}
	while(*q!='\0')
	{
		*p=*q;
		p++;
		q++;
	}
	*q='\0';
	
}
void string1::acceptstring(){
	char a[20];
	char b[50];
	cout<<"Enter string1:"<<endl;
	cin>>a;
}
void string1::stringdisplay(){
	cout<<" the length : "<<len<<endl;
	cout<<"the string : "<<ptr<<endl;
}

int main()
{
	string1 c2("tejal");
	c2.acceptstring();
	c2.stringdisplay();
}
	
