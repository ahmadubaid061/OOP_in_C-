#include <iostream>
using namespace std;
struct android{
	long long int IMEIno;
	string type;
	string make;
	int modelno;
	float memory;
	string Operating_system;
	//passing default values
//	android(){
//		this->IMOIno=1120;
//		this->type="smartphone";
//		this->make="samsung";
//		this->memory=128.00;
//		this->Operating_system="android";
//		this->modelno=12;
//	}
	
	void setValues(){
		cout<<"Enter IMEI Number: ";
		cin>>this->IMEIno;
		cout<<"Enter Type : ";
		cin>>this->type;
		cout<<"Enter make : ";
		cin>>this->make;
		cout<<"enter memory: ";
		cin>>this->memory;
		cout<<"Enter operating System: ";
		cin>>this->Operating_system;
		
	}
	void display(){
		cout<<"IMEI number : "<<this->IMEIno<<endl;
		cout<<"type is    : "<<this->type<<endl;
		cout<<"make is    : "<<this->make<<endl;
		cout<<"memory is  : "<<this->memory<<endl;
		cout<<"OS is      : "<<this->Operating_system<<endl;
		cout<<"modelNo is : "<<this->modelno<<endl;
	}
};
int main()
{
	android a;
	cout<<"----------------------setting values--------------\n"<<endl;
	a.setValues();
	cout<<"\n----------------------displaying Data-------------\n"<<endl;
	a.display();
	return 0;
}
