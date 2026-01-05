#include <iostream>
using namespace std;
template <class T>
T findMax(T a,T b){
	if(a>b){
		return a;
	}
	else if(a<b){
		return b;
	}
	else{
		cout<<"both are the equal"<<endl;
	}
}
int main(){
	
	int intMax=findMax(15,17);
	cout<<"Integer Maximum is: "<<intMax<<endl;
	double doubleMax=findMax(15.1234,15.2345);
	cout<<"Double  Maximum is: "<<doubleMax<<endl;
	string stringMax=findMax("25.78","25.67");
	cout<<"String  Maximum is: "<<stringMax<<endl;
	return 0;
}
