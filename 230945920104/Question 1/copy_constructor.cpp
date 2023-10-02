#include<iostream>
using namespace std;

class date{
	int dd,mm,yy;
	public:
		void show();
		date(int,int,int);
};
date::date(int d,int m,int y){
	dd=d;
	mm=m;
	yy=y;
}

void date::show(){
	cout<<"date is:"<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
int main()
{
	date d1(12,2,2023);
    d1.show();
    date d2(d1);
    d2.show();
	
	
	
	return 0;
}
