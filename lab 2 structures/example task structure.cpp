#include <iostream>
using namespace std;
struct employ{
	string name;
	string designation;
	void read(){
		cout<<" enter name: ";
		getline(cin,name);
		cout<<"enter designation: ";
		getline(cin,designation);
		
	}
	void display(){
		cout<<"Name is :       "<<name<<endl;
		cout<<"Designation is: "<<designation<<endl;
	}
};
int main(){
	employ e;
//	e.name="Ubaid";
//	e.designation="Student";
//	cout<<"Name is: "<<e.name<<" \nDesignation is: "<<e.designation<<endl;
	
	e.read();
	e.display();
	return 0;
}
