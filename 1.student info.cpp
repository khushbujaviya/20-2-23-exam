/*1.display 5 Students information using encapsulation by including below mentioned attributes:
	stu_id
	stu_name
	stu_age
	stu_course
	*/

#include<iostream>
#include<string>

using namespace std;

class Student
{
	private:
		int student_id;	
		char *student_name;
		int student_age;
		char *student_course;
	    
    public:
    	void setter(int student_id,char *student_name,int student_age,char *student_course)
	   {
		this->student_id=student_id;
		this->student_age=student_age;
		this->student_name=student_name;
		this->student_course=student_course;
	}
    	void getter();
};

	void Student::getter()
	{
		cout<<"student_id:"<<student_id<<endl;
		cout<<"student_name:"<<student_name<<endl;
		cout<<"student_age:"<<student_age<<endl;
		cout<<"student_course:"<<student_course<<endl;
		
	}
	main()
	{
		Student obj1;
		
		char name[30]= "khushbu";
		char course [40]= "b.c.a";
	
		obj1.setter(6,name,50,course);
		obj1.getter();
	}
