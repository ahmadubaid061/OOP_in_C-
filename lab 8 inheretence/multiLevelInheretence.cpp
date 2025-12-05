#include <iostream>
using namespace std;
class staff{
	
	public:
		int staffID;
		staff(int x){
			staffID=x;
		}
		int getstaffID(){
			return staffID;
		}
};
class professor:public staff{
	string depName;
	int depID;
	public:
		professor(string s,int x,int y) :staff(y){
			depName=s;
			depID=x;
			staffID=y;
		}
		string getDepName(){
			return depName;
		}
		int getDepID(){
			return depID;
		}
};
class visitingProfessor:public professor{
	int courses;
	float salary_per_course;
	float total_salary;
	public:
		visitingProfessor(int c,float s,string n,int dID,int stffID):professor(n,dID,stffID){
			courses=c;
			salary_per_course=s;
		}
		
		void totalSalary(){
			total_salary=courses*salary_per_course;
		}
		
		void displaySalary(){
			cout<<"total salary is: "<<total_salary<<endl;
		}
};
int main(){
	visitingProfessor p(5,10000.00,"ubaid",11,1210);
	p.totalSalary();
	p.displaySalary();
	return 0;
}
