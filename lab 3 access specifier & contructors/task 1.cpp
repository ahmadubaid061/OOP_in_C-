#include <iostream>
using namespace std;
class myClass{
	public:
	myClass(){
		cout<<"I am the default constructor"<<endl;
	}
	myClass(int x,int y){
	cout<<"I am parameterized constructor"<<endl;
	}
	myClass(myClass &c){
		cout<<"I am the copy constructor"<<endl;
	}
	~myClass(){
		cout<<"******I am the destructor:"<<endl;
	}
};
int main(){
	myClass c1;
	myClass c2(2,4);
	myClass c3(c1);
	return 0;
}
