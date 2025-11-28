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
	int size;
	cout<<"how many Objects do you want to create: ";  //user can decide how many objects he wants 
	cin>>size;
	Student s[size];
	for(int i=0;i<size;i++){
		cout<<"\n------------------------Enter Data for Students: "<<i+1<<endl;
		s[i].getDetails();
	}
	
	for(int i=0;i<size;i++){
	     cout<<"\n-----------------------student "<<i+1<<": Details;"<<endl;
	    s[i].printDetails();
	}
	
}
main(){
	function();
	return 0;
}
