#include <iostream>
using namespace std;
class Circle;
class Rectangle{
	double area;
	public:
	Rectangle(double a){
		area=a;
	}
	//friend class
	friend void compareArea(Rectangle r,Circle c);
	
};
class Circle{
	double area;
	public:
		Circle(double a){
			area=a;
		}
		
	friend void compareArea(Rectangle r,Circle c);
};
void compareArea(Rectangle r,Circle c){
	if(r.area>c.area){
		cout<<"Rectangle area is greater!"<<endl;
	}
	else if(r.area<c.area)
	{
		cout<<"Circle area is Greater!"<<endl;
	}else{
		cout<<"Both have same area!"<<endl;
	}
}
int main(){
	Rectangle r(20);
	Circle c(30);
	compareArea(r,c);
	return 0;
}
