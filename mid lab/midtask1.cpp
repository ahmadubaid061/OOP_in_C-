//-----------------------Ubaid AHmad------------2410-0011
#include <iostream>
using namespace std;
int x=0;  //used in distructure
class StudentRecord{
	string name;
	int rollNo;
	int marks[3];
	public:
		static int count;
			StudentRecord(){
			name="newStudent";
			rollNo=13;
			
			count++;
		}
		StudentRecord(string s,int r){
			name=s;
			rollNo=r;
		
			count++;
		}
		
		void setmarks(){
            for(int i=0;i<3;i++){
            	cout<<"Enter maarks in subject "<<i+1<<" ";
            	cin>>marks[i];
			}
		}
		
	    int totalMarks(){
	    	int sum=0;
	    	for(int i=0;i<3;i++){
	    		sum+=marks[i];
			}
			return sum;
		}
		
		int average(int sum,int n){
			return sum/n;
		}
		
		StudentRecord operator+(StudentRecord &s){
			StudentRecord temp;
			for(int i=0;i<3;i++){
				temp.marks[i]=marks[i]+s.marks[i];
			}
			
			return temp;
		}
		
		void display() const{
		    cout<<"\nstudent name is: "<<name<<endl;
		    cout<<"student RollNo is: "<<rollNo<<endl;
		    for(int i=0;i<3;i++){
		    	cout<<"marks in object "<<i+1<<": "<<marks[i]<<endl;
			}
		}
		
		~StudentRecord(){
			x++;
			cout<<"object "<<x<<" finished"<<endl;
		}
};
int StudentRecord::count=0;
int main(){
	int n=3;
	
	//object 1
	StudentRecord s1("Ubaid Ahmad",11);
	cout<<"\n Enter marks for student 1"<<endl;
	s1.setmarks();
	s1.display();
	int sum=s1.totalMarks();
	cout<<"\nstudent 1 total marks are: "<<sum<<endl;
	int avg=s1.average(sum,n);
	cout<<"student 1 average is: "<<avg<<endl;
	
	

	//object 2
	StudentRecord s2("Ahmad Ali",12);
	cout<<"\n Enter marks for student 2"<<endl;

	s2.setmarks();
	
	//object 3
	StudentRecord s3=s1+s2;
	
	cout<<"\nstudent 1 data: "<<endl;
	s1.display();
	cout<<"\nstudent 2 data: "<<endl;
	s2.display();
	cout<<"\nstudent 3 data: "<<endl;
	s3.display();
	
	int totalObj=s1.count;
	cout<<"\n in total : "<<totalObj<<" number of objects created"<<endl;
	return 0;

}
