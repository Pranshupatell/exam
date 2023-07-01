#include<iostream>
#include<string.h>
using namespace std;

class Distance{
	public :
		int inch,feet;
		
};

int main()
{
	Distance d1,d2,sum;
	
	cout<<"first distance :- "<<endl;
	cout<<"enter feet1 = ";cin>>d1.feet;
	cout<<"enter inch1 = ";cin>>d1.inch;
	
	cout<<"second distance :- "<<endl;
	cout<<"enter feet2 = ";cin>>d2.feet;
	cout<<"enter inch2 = ";cin>>d2.inch;
	
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	
	while(sum.inch>=12)
	{
		sum.feet++;
		sum.inch-=12;
	}
	
	cout<<"sum of both the distance ="<<sum.feet<<"feet"<<sum.inch<<"inch"<<endl;
	return 0;
}