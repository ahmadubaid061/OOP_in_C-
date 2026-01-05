#include <iostream>
using namespace std;
template <class T>
class calculator{
	T value1;
	T value2;
	T value3;
	public :
		calculator(T a,T b,T c){
			value1=a;
			value2=b;
			value3=c;
		}
		
		T Sum(){
			cout<<value1<<" + "<<value2<< " = "<<value1+value2<<endl;
		}
		
		T Subtract(){
			cout<<value1<<" - "<<value2<< " = "<<value1-value2<<endl;
		}
		
		T Product(){
			cout<<value1<<" * "<<value2<< " = "<<value1*value2<<endl;
		}
		T Divide(){
			cout<<value1<<" / "<<value2<< " = "<<value1/value2<<endl;
		}
//		T Reminder(){
//			cout<<value1<<" % "<<value2<< " = "<<value1 % value2<<endl;  //% doen't work for float values
//		}
		T Average(){
			cout<<"Average of "<<value1<<","<<value2<<","<<value3<< " is: "<<(value1+value2+value3)/3<<endl;
		}
};
int main(){
	cout<<"==========================Integer Calculator===========================\n"<<endl;
	calculator<int> intCalc(6,4,7);
	intCalc.Sum();
	intCalc.Subtract();
	intCalc.Product();
	intCalc.Divide();
//	intCalc.Reminder();
	intCalc.Average();
	

	cout<<"=========================== Float   Calculator===========================\n"<<endl;
	calculator<float> floatCalc(8.5,6.3,9.2);
	floatCalc.Sum();
	floatCalc.Subtract();
	floatCalc.Product();
	floatCalc.Divide();
//	floatCalc.Reminder();
	floatCalc.Average();
	
	return 0;
}
