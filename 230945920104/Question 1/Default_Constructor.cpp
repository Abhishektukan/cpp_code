#include <iostream>
using namespace std;

class student{
	int rollno;
	int marks;
	public:
	student(){
		rollno=3;
		marks=50;
	}
	student(int rollno,int marks){
		this->rollno=rollno;
		this->marks=marks;
	}
	void display(){
		cout<<"the rollno of the student is ="<<rollno<<endl;
		cout<<"the marks of the student is ="<<marks<<endl;
	}
};
int main(){
	
	student s1;
	s1.display();
	
}







