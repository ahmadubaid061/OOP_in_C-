#include <iostream>
using namespace std;

class Car{
	private:
		int horsepower;
	public:
		Car(int value){
			horsepower=value;
		}	
		
	friend class Engine;
};
class Engine{
	public:
		int incrementHP(Car &c){
			c.horsepower+=20;
			return c.horsepower;
		}
};
int main(){
	Car c(100);
	Engine e;
	int newHp=e.incrementHP(c);
	cout<<"the car Engine's horsePower after increment by 20 is: "<<newHp<<"Hp"<<endl;
	return 0;
	
}
