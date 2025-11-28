#include <iostream>
using namespace std;

class student{
	int Id;
	
	int size;
	
	public:
		float* grades;
		student(int n){
			size=n;
			grades=new float[size];
		}
		
		void readData(){
			cout<<"Enter student ID: ";
			cin>>Id;
			cout<<"\nEnter "<<size<<" number of grades: ";
			for(int i=0;i<size;i++){
				cin>>grades[i];
			}
		}
		
		student(student &s){
			Id=s.Id;
			size=s.size;
			grades=new float[size];
			for(int i=0;i<size;i++){
				grades[i]=s.grades[i];
			}
		}
		
		void display(){
			cout<<"\nStudent ID is: "<<Id<<endl;
			cout<<"Student grades are: ";
			for(int i=0;i<size;i++){
				cout<<grades[i]<<" ";
			}
			cout<<endl;
		}
		
		~student(){
			delete[] grades;
		}
	
};
int main(){
	student s1(5);
	s1.readData();
	
	student s2(s1);
	s1.display();
	s2.display();
	
	s1.readData();
	s1.display();
	s2.display();
	
	return 0;
}
