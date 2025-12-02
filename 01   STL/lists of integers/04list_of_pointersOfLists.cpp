#include <iostream>
#include <list>
using namespace std;
//display
void display(list<int> l){
	list<int>::iterator i;
	for(i=l.begin();i!=l.end();i++){
		cout<<*i<<" ";
	}
}
//display list of lists
void displayLists(list<list<int>* > ll){
	list<list<int>* >::iterator i;
	for(i=ll.begin();i!=ll.end();i++){
		cout<<"{";
		display(*(*i));
		cout<<"} ";
	}
}
int main(){
	//----------------------------l1
	list<int> l1;
	cout<<"In the Start!"<<endl;
	l1.push_back(24);
	l1.push_front(25);
	l1.push_back(45);
	l1.push_front(48);
	//-displaying l1
	cout<<"list #1 is: ";
	display(l1);
	cout<<"\n"<<endl;
	//----------------------------l2
	list<int> l2;
	l2.push_back(50);
	l2.push_front(51);
	l2.push_back(52);
	l2.push_front(53);
	//-displaying l2
	cout<<"list #2 is: ";
	display(l2);
	cout<<"\n"<<endl;
	//----------------------------list of lists
	list<list<int>* > ll; 
	ll.push_back(&l1);
	ll.push_front(&l2);
	//-displaying list of lists (ll)
	cout<<"List of lists is!"<<endl;
	displayLists(ll);
	
	return 0;
}
