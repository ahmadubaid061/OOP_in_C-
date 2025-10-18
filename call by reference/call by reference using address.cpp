#include <iostream>
using namespace std;
//in case of normal perimeters a copy of the the variable is created and by modifying that will not chang the actuall value
//but in case when we pass address of a variable means we are modifying our original variable and not a copy
void modify(int &x){
	x+=10;
}
int main(){
	int a=5;
	cout<<"value of a before modification: "<<a<<endl;
	modify(a);
	cout<<"value of a after modification: "<<a<<endl;
	return 0;
}
