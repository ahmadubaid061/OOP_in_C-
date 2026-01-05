#include <iostream>
#include <array>
#include <list>
using namespace std;
const int n=5;
int totalmarks(array<int,5>& arr){
	int t=0;
	for(int i=0;i<n;i++){
		t+=arr[i];
	}
	
	return t;
}

float average(int total){
	return total/n;
}

void displayMarks(array<int,5>& arr){
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void removeFailed(list<array<int,5> > &l){
	list<array<int,5> >::iterator it=l.begin();
	while(it!=l.end()){
		int total=totalmarks(*it);
		int avg=average(total);
		if(avg<45){
			it=l.erase(it);
		}else{
			it++;
		}
	}
}

void displayAll(list<array<int,5> > &l){
	int count=0;
	list<array<int,5> >::iterator it=l.begin();
	while(it!=l.end()){
		cout<<"marks of student"<<count+1<<" are: ";
		displayMarks(*it);
		count++;
		it++;
		
	}
}
int main(){
	array<int,5> marks;
	list<array<int,5> > students;
	array<int,5> totals;
	array<float,5> averages;
	for(int i=0;i<n;i++){
		cout<<"Enter marks of student "<<i+1<<": ";
		for(int j=0;j<n;j++){
			cin>>marks[j];
		}
		
//		totals[i]=totalmarks(marks);
//		averages[i]=average(totals[i]);  no need yet
		
		students.push_back(marks);	
		
	}
	cout<<"All students marks are!"<<endl;
	displayAll(students);
	
	cout<<"failed student (average<45) are removed!"<<endl;
	removeFailed(students);
	cout<<"All students marks after removing the failed ones are!"<<endl;
	displayAll(students);
	
	return 0;
	
}
