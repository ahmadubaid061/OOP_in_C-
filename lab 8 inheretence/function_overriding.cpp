#include <iostream>
using namespace std;
class shape{
	void calculateArea(){
	};
	void displayArea(){
	};
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
	circle c(5);  //radius=5
	rectangle r(4,5); //length=4,width=5
	
	c.calculateArea();
	r.calculateArea();
	
	c.displayArea();
	r.displayArea();
	
	return 0;
}
