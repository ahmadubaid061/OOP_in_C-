#include <iostream>
using namespace std;
static void greet(){
	cout<<"Hello from static funciton:"<<endl;
}

void callGreet(){
	greet();
}
int main(){
	
	callGreet();
	return 0;
}
