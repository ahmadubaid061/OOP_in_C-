#include <iostream>
using namespace std;
class Rectangle{
	int length;
	int width;
	double area;
	public:
		Rectangle(){
			length=0;
		     width=0;
		}
		Rectangle(int l,int w){
			length=l;
			width=w;
		}
		double Area(){
			 area=length*width;
			return area;
		}
		double Area(int l,int w){
			 length=l;
			 width=w;
		    area=length*width;
			return area;
		}
		bool operator==(Rectangle &r){
			return (area==r.area);
		}
};
int main(){
	Rectangle r1(4,5);
	double area1=r1.Area();
	cout<<"Area of First rectangle is: "<<area1<<endl;
	Rectangle r2;
	double area2=r2.Area(7,9);
	cout<<"Area of Second rectangle is: "<<area2<<endl;
	
	if(r1==r2){
		cout<<"Area of rectangle 1 is equals to area of rectangle 2!"<<endl;
	}else{
		cout<<"Area of rectangle 1 is not equals to area of rectangle 2!"<<endl;
	}
	return 0;
}
