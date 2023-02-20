/*2.WAP to get and display N numbers of Hotels and static information using encapsulation with array of objects member by including below mentioned attributes:
	hotel_id
	hotel_name
 	hotel_establish_year
 	*/
 	
	 
#include<iostream>
using namespace std;

class hotel{
	private:
		static int id;
		static char name[10];
		static int establish_year;
	public:
		static void setter();
		static void getter();
	};
		 int hotel::id=0;
		 char hotel::name[10]="raj";
		 int hotel::establish_year=2023;
		
	void hotel::setter()
		{
			cout<<"enter hotel id: ";
			cin>>id;
			
			cout<<"enter hotel name: ";
			cin>>name;
		
			cout<<"enter hotel establish_year:";
			cin>>establish_year;
		
		}
	void hotel::getter()
		{
			cout<<id<<endl;
			cout<<name<<endl;
			cout<<establish_year<<endl;
			cout<<endl;
		}
main(){
	int i;
	int n;
	hotel obj[n];
		cout<<"enter object: ";
		cin>>n;
		for(i=0;i<n;i++)
		{
			obj[i].setter();
	
			obj[i].getter();
		}
}
