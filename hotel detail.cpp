#include<iostream>
#include<string.h>
using namespace std;

class Hotel{
	public:
		int id;
		char name[100];
		char type[100];
		int staff_size;
		char room_size[100];
		int establish_year;
		char address[100];
		char rating_type[100];
		char website[100];
		
		public:
			void set(int id,char name[],char type[],int staff_size,char room_size[],int establish_year,char address[],char rating_type[],char website[])
			{
			  	this->id=id;
			  	strcpy(this->name,name);
			  	strcpy(this->type,type);
			  	this->staff_size=staff_size;
			  	strcpy(this->room_size,room_size);
			  	this->establish_year=establish_year;
			  	strcpy(this->address,address);
			  	strcpy(this->rating_type,rating_type);
			  	strcpy(this->website,website);
			  	
			}
			void get()
			{
			  cout<<"entered id = "<<id<<endl;	
			  cout<<"entered name = "<<name<<endl;
			  cout<<"entered type = "<<type<<endl;
			  cout<<"entered staff size = "<<staff_size<<endl;
			  cout<<"entered room size = "<<room_size<<endl;
			  cout<<"entered establish year = "<<establish_year<<endl; 
			  cout<<"entered address = "<<address<<endl;
			  cout<<"entered rating type = "<<rating_type<<endl;
			  cout<<"entered website = "<<website<<endl;
			}
};

int main()
{
	Hotel h;
	h.set(10,"rambagh palace","veg & non.veg both",70,"30*40",1987,"jaipur,rajasthan,india","5star","rambaghpalace.com");
	h.get();
	
	return 0;
}