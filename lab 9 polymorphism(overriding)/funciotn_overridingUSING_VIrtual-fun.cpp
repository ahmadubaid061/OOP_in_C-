#include <iostream>
using namespace std;
class shape{
	public:
		virtual void calculateArea()=0;
		virtual void displayArea()=0;
};
class circle:public shape{
	int radius;
	double area;
	public:
		circle(int r){
			radius=r;
		}
		void calculateArea(){
			area=2*radius*(3.14);
		}
		void displayArea(){
			cout<<"area of circle is: "<<area<<endl;
		}
};
class rectangle:public shape{
	int length;
	int width;
	double area;
	public:
		rectangle(int l,int w){
			length=l;
			width=w;
		}
		void calculateArea(){
			area=length*width;
		}
		void displayArea(){
			cout<<"area of circle is: "<<area<<endl;
		}
};
int main(){	
	shape* pointer;
	
	circle c(5);  //radius=5
	rectangle r(4,5); //length=4,width=5
	
	pointer=&c;
	pointer->calculateArea();
	pointer->displayArea();
	
	pointer=&r;
	pointer->calculateArea();
	pointer->displayArea();
	
	return 0;
}
