#include <iostream>
using namespace std;
class Complex{
	float real;
	float imaginary;
	public:
		Complex(){
			real=0;
			imaginary=0;
		}
		Complex(float r,float i){
			real=r;
			imaginary=i;
		}
		
		Complex operator*(Complex &c){
			Complex newObject;
			newObject.real=(this->real*c.real)-(this->imaginary*c.imaginary);
			newObject.imaginary=(this->real*c.imaginary)+(this->imaginary*c.real);
			
			return newObject;
		}
		
		void display(){
			cout<<this->real<<"+"<<this->imaginary<<"i"<<endl;
		}
};
int main(){
	Complex c1(5.0,6.0);
	Complex c2(4.0,7.0);
	
	cout<<"The First  Complex Number is: ";
	c1.display();
	
	cout<<"The Second Complex Number is: ";
	c2.display();
	
	Complex c3=c1*c2;
	cout<<"The third Complex Number is: ";
	c3.display();
	
	return 0;
}
