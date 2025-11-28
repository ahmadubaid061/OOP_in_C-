#include <iostream>
using namespace std;
class myclass{
	public:
		int value;
		myclass(int v){
			value=v;
		}
		
		void display() const{
			cout<<"value is: "<<value<<endl;
		}
		
		void modifiy(int v){
			value=v;
		}
};
int main(){
	const myclass object(10);
	object.display();  
	//cannot call display function 
	//until is declared const
	
	//trying to modify the value
	
//	object.modifiy(20);
//	
//	object.display();

     cout<<object.value<<endl;
	
	return 0;
	
}
