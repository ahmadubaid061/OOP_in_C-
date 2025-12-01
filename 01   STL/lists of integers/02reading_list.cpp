#include <iostream>
#include <list>
using namespace std;
//display
void display(list<int> l){
	list<int>::iterator i;
	for(i=l.begin();i!=l.end();i++){
		cout<<*i<<" ";
	}
	cout<<endl;
}
//insert at front
void insert_back(list<int> &l,int n,int m){
	int i;
	for(i=1;i<=n;i++){
		l.push_back(m*i);   //push_back n times m*i  (m is constant but i is changing)
		
	}
}
//insert at back
void insert_front(list<int> &l,int n,int m){
	int i;
	for(i=1;i<=n;i++){
		l.push_front(m*i);   //push_front n times m+i  (m is constant but i is changing)
		
	}
}
int main(){
	list<int> l1;
	cout<<"In the Start!"<<endl;
	display(l1);
	cout<<"after pushing 5 times 4*i !"<<endl;
	insert_back(l1,5,4);    //push_back 5 times 4*i
	cout<<"\nafter pushing 5 times 4*i !"<<endl;	
	display(l1);
	insert_front(l1,4,5);   //push_front 4 times 5+i
	cout<<"\nafter pushing 4 times 5+i !"<<endl;
	display(l1);
	
	return 0;
}
