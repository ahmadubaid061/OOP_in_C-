#include <iostream>
using namespace std;
class Box{
	private:
		int length;
		int *breadth;   
		int height; 
	
	public:
		Box(){
			breadth=new int;
		}
		
		void setDimensions(int l,int b,int h){
			length=l;
			*breadth=b;
			height=h;
			
		}
		
		Box(Box &b){
			length=b.length;
			breadth=b.breadth;  //passed by reference
			height=b.height;
		}
	    void showData(){
	    	cout<<"length : "<<length<<endl;
	    	cout<<"beadth : "<<*breadth<<endl;
	    	cout<<"height : "<<height<<endl;
		}
		

};
int main(){
	Box b1;
	b1.setDimensions(4,5,6);
	Box b2(b1);
	cout<<"--------------after modifying"<<endl;
	cout<<"\n-----box 1:----"<<endl;
	b1.showData();
	cout<<"------box 2:----"<<endl;
	b2.showData();
	
	b1.setDimensions(10,11,12);
	cout<<"\n--------------before modifying"<<endl;
	cout<<"\n-----box 1:----"<<endl;
	b1.showData();
	cout<<"------box 2:----"<<endl;
	b2.showData();
	return 0;
}
