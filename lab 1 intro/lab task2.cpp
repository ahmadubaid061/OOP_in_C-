#include <iostream>
using namespace std;
class Car{
	public:
		string model;
		int price;
		string color;
		long year;
		
		void start(){
			cout<<"Car is started!"<<endl;
			
		}
		
		void carModel(){
			cout<<this->model<<endl;
		}
		
		void printDetails(){
			cout<<"model is: "<<this->model<<endl;
			cout<<"year  is: "<<this->year<<endl;
			cout<<"price is: "<<this->price<<endl;
			cout<<"color is: "<<this->color<<endl;
		}
};
int main(){
	Car c1;
	c1.start();
	
	c1.model="2015";
	c1.color="black";
	c1.price= 25000;
	c1.year=2025;
	c1.printDetails();
	return 0;
	
}
