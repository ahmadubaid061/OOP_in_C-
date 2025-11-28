#include <iostream>
using namespace std;
class Shape{
	public:
	string Color;
	string ShapeName;
	
	
	double Area(double length){
		double area=length*length;
		return area;
	}

};
int main(){
	Shape s1;
	s1.ShapeName="square";
	s1.Color="green";
	double area=s1.Area(4,7); 
	cout<<area<<endl;
	return 0;
}
