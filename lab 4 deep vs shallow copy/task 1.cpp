#include <iostream>
using namespace std;
class polygon{
	public:
	float length;
	float width;
	
	polygon(float a,float b){
		length=a;
		width=b;
	}
	
	polygon(polygon &p){
		length=p.length;
		width=p.width;
	}
	
	
	void display(){
		cout<<" length is: "<<length<<endl;
		cout<<" width is : "<<width<<endl;
	}
};
int main(){
	polygon one(4.0,5.0);
	
	
	polygon two(one);
	cout<<"----------object one--"<<endl;
	one.display();
	cout<<"----------object two--"<<endl;
	two.display();
	//modifying object one length;
	one.length=6;
	
	cout<<"-----------------------after modifying object one length"<<endl;
	cout<<"\n----------object one--"<<endl;
	one.display();
	cout<<"----------object two--"<<endl;
	two.display();
	
	return 0;
	
}
