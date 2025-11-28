// 3-Create a class Student with attributes: name, rollNo, marks.
 //3.1.Write a function showRecord() that displays the student’s information.
 //3.2. In main(), create two student objects, assign values, and display their records


#include <iostream>
using namespace std;
class Student{
	public:
		string name;
		int rollNo;
		int marks;
		void getDetails(){
			cout<<"Enter Student name:   ";
			cin>>this->name;
			cout<<"Enter Student RollNo: ";
			cin>>this->rollNo;
			cout<<"Enter Student marks:  ";
			cin>>this->marks;
		}
		void printDetails()
		{
			cout<<"Student Name is: "<<this->name<<"\nStudent Roll Number is: "<<this->rollNo<<"\nStudent marks are: "<<this->marks<<endl;
		}
};

void function(){
	Student s1,s2;
	cout<<"------------------------Enter Data for Student 1!\n"<<endl;
	s1.getDetails();
	cout<<"\n------------------------Enter Data for Student 2!\n"<<endl;
	s2.getDetails();
	cout<<"\n-----------------------student1: Details;"<<endl;
	s1.printDetails();
	cout<<"\n------------------------student2: Details;"<<endl;
	s2.printDetails();
}
main(){
	function();
	return 0;
}
