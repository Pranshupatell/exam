#include<iostream>
#include<string.h>
using namespace std;

class Time{
 public :
 	int h,m,s;
};

int main()
{
	Time t;
	
	cout<<"enter time in second = ";cin>>t.s;
	
	t.h=t.s/3600;
	t.m=(t.s%3600)/60;
	t.s=(t.s%3600)%60;
	
	cout<<"time ="<<t.h<<":"<<t.m<<":"<<t.s<<endl;
	
	
	return 0;
}