#include<iostream>
using namespace std;
#include<string.h>
class string1{
	int len;
	char*ptr;
	public:
		void stringdisplay();
		string1(char*);
		~string1();
		string1(string1 &);
		
};
void string1::stringdisplay(){
	cout<<"the length : "<<len<<endl;
	cout<<"the string : "<<ptr<<endl;
}
string1::string1(char*sptr){
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}
string1::~string1(){
	cout<<"destructor is called"<<endl;
	if(ptr)
	delete []ptr;
	ptr=NULL;
}
string1::string1(string1 &c){
    len=c.len;
	ptr=new char[len+1];
	strcpy(ptr,c.ptr);
}
int main()
{
	string1 c2("Abhi");
	c2.stringdisplay();
	string1 c3(c2);
	c3.stringdisplay();
	c3.~string1();
	c2.stringdisplay();
	return 0;
}
