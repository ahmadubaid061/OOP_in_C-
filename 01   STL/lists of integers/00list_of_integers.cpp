#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> l1;
	l1.push_back(24);
	l1.push_back(25);
	l1.push_front(27);
	list<int>::iterator x=l1.begin();
	list<int>::iterator y=l1.end();
	
	cout<<"front is: "<<*x<<" back is: "<<*(--y)<<endl; //end() returns the last element which is always empty so we have
	// decrement it
	
	return 0;
}
