/*4. WAP to print rate of interests of different banks using
hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes */
#include<iostream>
using namespace std;

class RBI{
	public:
		void getROI(){
			cout<<"class RBI"<<endl;
		}
};
class SBI:public RBI{
	public:
	void getROI(){
		RBI::getROI();
		cout<<"class SBI"<<endl;
	}
};
class BOB:public RBI{
		public:
			void getROI(){
				RBI::getROI();
				cout<<"class BOB"<<endl;
			}
};
class ICICI:public RBI{
	public:
		
		void getROI(){
		   RBI::getROI();
			cout<<"class ICICI"<<endl;
		}
};
main(){
	SBI obj;
	BOB obj1;
	ICICI obj2;
	
	obj.getROI();
	obj1.getROI();
	
	obj2.getROI();
	
	
	

}
