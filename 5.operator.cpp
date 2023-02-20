/* 5. WAP to perform all basic arithmetic operations such like +, -, *, and / operations by implementing method	overloading
	if you pass 2 arguments, perform subtraction
	if you pass 3 arguments, perform addition*/
	
#include<iostream>
using namespace std;
class operarter{
	private:
	
		int sub;
		
		int add;
	public:
		void setdata(int a,int b){
			sub=a-b;
			cout<<"sub:"<<sub<<endl;
		}
		void setdata(int a,int b,int c){
		add=a+b+c;
			cout<<"add:"<<add<<endl;
		}
	
		
};
main(){
	operarter o;
	o.setdata(50,22);
	o.setdata(70,110,10);


}
