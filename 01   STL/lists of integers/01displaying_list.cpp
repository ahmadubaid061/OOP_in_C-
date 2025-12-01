#include <iostream>
#include <list>
using namespace std;
void display(list<int> l){
	list<int>::iterator i;
	for(i=l.begin();i!=l.end();i++){
		cout<<*i<<" ";
	}
}

int main(){
	list<int> l1;
	l1.push_back(24);
	l1.push_back(25);
	l1.push_front(27);
	display(l1);
	return 0;
}
