#include <iostream>
using namespace std;
class Car{
	string model;
	
	
	public:
	int	rentPerDay;
	Car(string m,int rent){
		model=m;
		rentPerDay=rent;
	}
	
	
};
class Customer{

	
	public:
		int days;
//	Customer(int d){
//			days=d;
//		}
	int  Rent(Car &c){
		int rent=days*c.rentPerDay;
		return rent;
	}
	
};

int main(){
	Car c("ferrari",1000);
	Customer person;
	cout<<"Enter number of days: ";
	cin>>person.days;
	
	int rent=person.Rent(c);
	cout<<"total rent of the customer is: "<<rent<<endl;
	return 0;
}
