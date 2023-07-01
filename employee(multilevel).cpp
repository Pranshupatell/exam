#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char comp_name[100];
        char address[100];
        char email[100];
        int contact;
        
        void set()
        {
        	cout<<"enter id of employee = ";cin>>id;
        	cout<<"enter name of employee = ";cin>>name;
        	cout<<"enter role of employee = ";cin>>role;
		}
};
class B : public A
{	
       public :
		void setter()
		{
			cout<<"enter salary of employee = ";cin>>salary;
			cout<<"enter experience of employee(in yrs) = ";cin>>experience;
		}
};
class C : public B
{
       public :
		void Set()
		{
			cout<<"enter company name of employee = ";cin>>comp_name;
			cout<<"enter address of employee(with no space) = ";cin>>address;
		}
		void get()
		{
		  cout<<"entered name of employee = "<<name<<endl;
		  cout<<"entered role of employee = "<<role<<endl;
		  cout<<"entered salary of employee = "<<salary<<endl;	
		}
};

class D : public C
{
   public :
   	void sett()
   	{
   	  cout<<"enter email of employee = ";cin>>email;	
   	  cout<<"enter contact of employee = ";cin>>contact;
	}
	void getter()
	{
	        cout<<"entered id of employee = "<<id<<endl;
        	get();
			cout<<"entered experience of employee = "<<experience<<endl;	
			cout<<"entered company name of employee = "<<comp_name<<endl;
			cout<<"entered address of employee = "<<address<<endl;
			cout<<"enter email of employee = "<<email<<endl;	
   	        cout<<"enter contact of employee = "<<contact<<endl;
	}
   	
};

int main()
{
	D d;
	d.set();
	d.setter();
	d.Set();
	d.sett();
cout<<"--------------------------------------------"<<endl;
    d.getter();
	
	return 0;
}