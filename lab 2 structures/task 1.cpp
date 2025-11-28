#include <iostream>
using namespace std;
struct Student{
	string name;
	int rollNo;
	string Uni_name;
	int year;
	string semester;
 // function for reading student data
    void read(){
    	cout<<"Enter Student Name: ";
    	getline(cin,name);
    	cout<<"Enter Student RollNo: ";
    	cin>>rollNo;
    	cout<<"Enter University Name: ";
    	cin.ignore(); 
    	getline(cin,Uni_name);
    	cout<<"Enter admission year:  ";
    	cin>>year;
    	cout<<"Enter current Semester: ";
    	cin.ignore();
    	getline(cin,semester);
	}
	void display(){
		cout<<"Student Name is: "<<name<<endl;
		cout<<"Student RollNo is: "<<rollNo<<endl;
		cout<<"University Name is: "<<Uni_name<<endl;
		cout<<"Admission Year is: "<<year<<endl;
		cout<<"Current semester is: "<<semester<<endl;
		
	}
};
int main(){
	Student s1,s2;
	cout<<"----------------------------------Enter data for student 1!\n"<<endl;
	s1.read();
	cout<<"----------------------------------Enter data for student 2!\n"<<endl;
	s2.read();
	
	cout<<"\n--------------------------------displaying data for student 1!\n"<<endl;
	s1.display();
	cout<<"--------------------------------displaying data for student 2!"<<endl;
	s2.display();
	
	return 0;
	
}
