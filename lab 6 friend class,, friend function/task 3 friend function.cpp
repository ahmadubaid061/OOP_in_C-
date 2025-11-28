#include <iostream>
using namespace std;

class Car{
	private:
		int horsepower;
	public:
		Car(int value){
			horsepower=value;
		}	
		
	friend void incrementHP(Car &c,int val);
};
void incrementHP(Car &c,int val){
	cout<<"\nInitially the car's horsepower is: "<<c.horsepower<<endl;
	c.horsepower+=val;
	cout<<"the car Engine's horsePower after increment by "<<val<<" is: "<<c.horsepower<<"Hp"<<endl;
}

int main(){
	Car c(100);
	incrementHP(c,40);
	return 0;
	
}
