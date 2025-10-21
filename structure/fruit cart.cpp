// ? Create a structure “Fruit” add 3 data members to store information Fruit name, price and 
//quantity.
 //? Create 5 Fruits with their names and add it price and quantity.
 //? Create variable Grand_total and show the total cost of fruits (for example: Apple Price is 10 
//rupees and orange price is 15 and you bought 10 apples and 10 oranges. Grand_Total=250 )//
#include <iostream>
using namespace std;
const int size=3;
struct Fruit{
	string name;
	int price;
	int quantity;
	

	
	void getData(string n,int p,int q){
		this->name=n;
		this->price=p;
		this->quantity=q;
	}
	void read()
	{
		cout<<"enter name :";
		cin>>name;
		cout<<"enter price :";
		cin>>price;
		cout<<"enter quantity:";
		cin>>quantity;
		cout<<"\n"<<endl;
	};
	
	
	int totalAmount(int p,int q){
		int total;
		total=p*q;
		return total;
	}
	
};
//int GrndTotal(Fruit f1,Fruit f2,Fruit f3,Fruit f4,Fruit f5){
//		int x;
//		x=f1.totalAmount()+f2.totalAmount()+f3.totalAmount()+f4.totalAmount()+f5.totalAmount();
//		return x;
//	}
int main(){
	
	Fruit arr[size];
	int grandtotal=0;
	for(int i=0;i<size;i++){
		cout<<"Enter fruit: "<<i+1<<" details"<<endl;
		arr[i].read();
		int total=arr[i].totalAmount(arr[i].price,arr[i].quantity);
		grandtotal+=total;	
		
	}
//	for(int i=0;i<size;i++){
//		cout<<"fruit: "<<i+1<<"data"<<endl;
//		arr[i].display();
//		cout<<"\n"<<endl;
//	}
	cout<<"\nGrandTOtal is:"<<grandtotal<<endl;
	return 0;
//	Fruit f1,f2,f3,f4,f5;
//	f1.getData("orange",10,12);
//	f2.getData("apple",20,15);
//	f3.getData("banana",15,30);
//	f4.getData("peach",20,40);
//	f5.getData("nashpati",30,50);
////	 totals for each
//	cout<<"----------------Total amounts for each fruit are: "<<endl;
//	cout<<"for orange: "<<f1.totalAmount()<<endl;
//	cout<<"for apple: "<<f2.totalAmount()<<endl;
//	cout<<"for banana: "<<f3.totalAmount()<<endl;
//	cout<<"for peach: "<<f4.totalAmount()<<endl;
//	cout<<"for nashpati: "<<f5.totalAmount()<<endl;
//
//cout<<" ------------------------------Grand total for all the fruits!"<<endl;
//   int Grand_total=GrndTotal(f1,f2,f3,f4,f5);
//   cout<<"Grand Total is: "<<Grand_total<<endl;
//	return 0;
	
}
