#include <iostream>
using namespace std;

struct item{
	int code;
	string name;
	int price;
	int quantity;
	void read(){
		cout<<"Enter item code: ";
		cin>>this->code;
		cout<<"Enter item name: ";
		cin>>this->name;
		cout<<"Enter item price: ";
		cin>>this->price;
		cout<<"Enter item Quantity: ";
		cin>>this->quantity;
	}
};


int main(){
	int size=5;
	item o[size];    //array of 5 objects
	for(int i=0;i<size;i++){
		cout<<"\n---------------enter data for student: "<<i+1<<endl;
		o[i].read();
	}
	
	//total cast
	int total_value=0;
	for(int i=0;i<size;i++){
		int x=o[i].price*o[i].quantity;
		total_value+=x;
	}
	
	cout<<"Total cast is: "<<total_value<<endl;
	return 0;
}
