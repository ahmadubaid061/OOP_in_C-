#include <iostream>
using namespace std;
class myClass{
	private:
			int y;
	public:
		int x;
	
	myClass(){
		x=5;
		y=5;
	}
	void display(){
		cout<<"x is: "<<x<<endl;
		cout<<"y is: "<<y<<endl;
		
	}
};
int main()
{
	myClass myObject;
	myObject.display();
	return 0;
	
}
