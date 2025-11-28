#include <iostream>
using namespace std;
class myclass{
	public:
		int variable1;
		mutable int variable2;
		myclass(int v1,int v2){
			variable1=v1;
			variable2=v2;
		}
		
		void setVariable2(int z)const{
			variable2=z;
		}
		void display()const{
			cout<<"variable1 is: "<<variable1<<" variable2 is: "<<variable2<<endl;
		}
		
	
};
int main(){
	const myclass object(10,20);
	cout<<"before changing variable 2 value"<<endl;
	object.display();  //can display beause display funciton is const
	 
	 object.setVariable2(30);
	 
	 cout<<"after changing variable 2 value "<<endl;
	 object.display(); //it can work because variable 2 is mutable
	 

     
	
	return 0;
	
}
