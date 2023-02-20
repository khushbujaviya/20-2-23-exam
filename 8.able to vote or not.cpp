/*8. WAP to implement exception handling mechanism for different types of scenarios:
	- a person cannot be able to vote if his/her age is less than 18*/
#include<iostream>
using namespace std;
main(){
	char name[20];
	int age;
	cout<<"enter name: ";
	cin>>name;
	cout<<"enter age: ";
	cin>>age;
	try{
	
	if(age>18){
		cout<<"this person is able to vote"<<endl;	
	}
	else{
		throw age;
	}
	}
	catch (int ag){
		cout<<"this person is cannot be able to vote";
	}
	
}





















