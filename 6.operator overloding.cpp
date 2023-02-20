#include<iostream>
using namespace std;
class count{
	public:
		int value=10;
		void operator+(){
			value++;
		}
		void getter(){
			cout<<value<<endl;
		}
		void operator-(){
			value--;
		}
		void getdata(){
			cout<<value;
		}
};
main(){
	count obj;
	+obj;
	obj.getter();
	-obj;
	obj.getdata();
}
