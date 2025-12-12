#include <iostream>
#include <array>
#include <list>
using namespace std;
void displayArray(array<int, 5>& arr){
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int calculateTotal(array<int,5>& arr){
	int total=0;
	for(int i=0;i<5;i++){
		total+=arr[i];
	}
	
	return total;
}
int calculateAverage(int total){
	return total/5;
}
void displayStudents(list<array<int,5>>& s){	
    list<array<int ,5> >::iterator it;
	int counter=1; //counter
	for(it=s.begin();it!=s.end();it++){
	    cout<<"student "<<counter<<" marks:" ;   
		displayArray(*it);
		counter++;
	}
}

int main(){
	array<int,5> marks1={50,40,30,60,20};
	array<int,5> marks2={23,43,35,23,12};
	array<int,5> marks3={53,34,25,12,36};
	array<int,5> marks4={46,66,78,23,12};
	array<int,5> marks5={30,24,13,25,49};
	
	
	list<array<int ,5> > students;
	
	students.push_back(marks1);
	students.push_back(marks2);
	students.push_back(marks3);
	students.push_back(marks4);
	students.push_back(marks5);
	
	cout<<"Displaying all the students using list"<<endl;
    displayStudents(students);


	list<array<int ,5> >::iterator it;
	
	
	for(it=students.begin();it!=students.end();it++){
		int total=0;
		int average=0;
		total=calculateTotal(*it);
		average=calculateAverage(total);
		if(average<50){
			it=students.erase(it);
			it++;
		}
		
	}
	
	cout<<"\nDisplaying students after deleting failed ones"<<endl;
	displayStudents(students);
	
	
	return 0;
}
