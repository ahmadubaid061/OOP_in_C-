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
};
int main(){
	Car c1;
	c1.start();
	
	c1.model="2025";
	c1.carModel();
	return 0;
	
}
