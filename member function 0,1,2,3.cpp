#include<iostream>
#include<string.h>
using namespace std;

class A{
	public:
		void set()
		{
			cout<<"(default) function = "<<"0"<<endl;
		}
		void set(int n)
		{
			cout<<"first parameterised function = "<<n<<endl;
		}
		void set(int m,int o)
		{
			cout<<"second parameterised function = "<<m<<","<<o<<endl;
		}
		void set(int x,int y,int z)
		{
		   cout<<"third parameterised function = "<<x<<","<<y<<","<<z<<endl;	
		}
};
int main()
{
	A a;
	a.set();
	a.set(10);
	a.set(20,30);
	a.set(40,50,60);
	
	return 0;
}