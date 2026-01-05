#include <iostream>
using namespace std;
class student {
private:
	string name;
    int Roll;
    float gpa;
    string remarks;
public:
//	student(string n,int r,float g,string rem) {
//	   name=n;
//	   Roll=r;
//	   gpa=g;
//	   remarks=rem;
//	}

    friend istream& operator>>(istream &in,student &s);
    friend ostream& operator<<(ostream &out,student &s);
};
    istream& operator>>(istream &in,student &s){
    	cout<<"Enter   name: ";
    	in>>s.name;
    	cout<<"Enter RollNo: ";
    	in>>s.Roll;
    	cout<<"Enter   GPA : ";
    	in>>s.gpa;
    	cout<<"Enter Remarks: ";
    	in>>s.remarks;
    	
    	return in;
	}

    ostream& operator<<(ostream &out,student &s) {
    out<<"Name is: "<<s.name<<endl;
    out<<"Roll No: "<<s.Roll<<endl;
    out<<"GPA  is: "<<s.gpa<<endl;
    out<<"Remarks: "<<s.remarks<<endl;
    return out;
}

int main() {
	student s;
	cin>>s;
	cout<<"\nstudent details are!\n"<<endl;
	cout<<s<<endl;
	return 0;
}
