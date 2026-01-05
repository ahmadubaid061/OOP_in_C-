#include <iostream>
using namespace std;
template <class T>
class Circle
{
	T radius;
	public:
		Circle(T r){
			radius=r;
		}
		T Area(){
			return 3.14*radius*radius;
		}
		
		T Circumference(){
			return 2*3.14*radius;
		}
};
int main(){
	Circle<int> intCircle(5);
	cout<<"Integer  area  of  Circle       is: "<<intCircle.Area()<<endl;
	cout<<"Integer Circumference of Circle is: "<<intCircle.Circumference()<<endl;
	cout<<endl;
	Circle<double> doubleCircle(4.1234);
	cout<<"Double  area  of  Circle        is: "<<doubleCircle.Area()<<endl;
	cout<<"Double Circumference of Circle  is: "<<doubleCircle.Circumference()<<endl;
	return 0;
}
