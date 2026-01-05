#include <iostream>
using namespace std;
class student {
private:
	string name;
    int Roll;
    float gpa;
    string remarks;
public:
	student(string n,int r,float g,string rem) {
	   name=n;
	   Roll=r;
	   gpa=g;
	   remarks=rem;
	}
    friend ostream& operator<<(ostream &out,student &s);
};

    ostream& operator<<(ostream &out,student &s) {
    out<<"Name is: "<<s.name<<endl;
    out<<"Roll No: "<<s.Roll<<endl;
    out<<"GPA  is: "<<s.gpa<<endl;
    out<<"Remarks: "<<s.remarks<<endl;
    return out;
}

int main() {
	student s("ubaid",11,3.4,"good");
	cout<<s<<endl;
	return 0;
}
