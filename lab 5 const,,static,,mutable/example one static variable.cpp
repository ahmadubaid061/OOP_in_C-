#include <iostream>
using namespace std;
void demo(){
	static int count=0; //when the function is called 
	//for the second time 
	//it is not initialized with zero again because
	// it is static and retains it's value
	cout<<count<<" ";
	count++;
}

void normal_demo(){
	 int count=0;
	cout<<count<<" ";
	count++;
}
int main(){
	cout<<"static display:"<<endl;
	for(int i=0;i<5;i++){
		demo();
		
	}
	cout<<"\nnormal display:"<<endl;
	for(int i=0;i<5;i++){
		normal_demo();
		
	}
	
	return 0;
}
