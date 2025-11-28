#include <iostream>
using namespace std;
class student{
	int age;
	//changed int to long long int for cnic
	long long int cnic;
	//changed int to string for semester
	string semester;
	//change char to string for name
	string name;
	public:
		//changed the setall method to a parameterized constructor 
		student(int a,long long int c,string sem,string n){
			age=a;
			cnic=c;
			semester=sem;
			name=n;
			
		}
		//created a seperate method for updating the age value;
		void setage(){
			cout<<"\nenter age of the student: ";
			cin>>age;
			cout<<endl;
		}
		
		void displayAll(){
			cout<<"Age is: "<<age<<endl;
			cout<<"cnic is: "<<cnic<<endl;
			cout<<"semester is: "<<semester<<endl;
			cout<<"name is: "<<name<<endl;
		}
};
int main(){
	student s(23,1510403882349,"4th","ubaid");
	s.displayAll();
	s.setage();
	s.displayAll();
}
