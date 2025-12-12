#include <iostream>
#include <array>
#include <list>
using namespace std;

void displayArray(array<int, 5>& arr) {
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int calculateTotal(array<int,5>& arr) {
    int total = 0;
    for (int i = 0; i < 5; i++)
        total += arr[i];
    return total;
}

int calculateAverage(int total) {
    return total / 5;
}

void displayStudents(list<array<int,5>>& s) {
    int counter = 1;
    list<array<int,5>>::iterator it;
    for (it=s.begin();it!=s.end();it++) {
        cout << "Student " << counter << " marks: ";
        displayArray(*it);
        counter++;
    }
}

void removeFailed(list<array<int,5>>& students) {
    list<array<int,5>>::iterator it = students.begin();

    while (it != students.end()) {
        int total = calculateTotal(*it);
        int avg = calculateAverage(total);

        if (avg < 50){
        	it = students.erase(it);
		}else {
            it++;   
        }
            
    }
}

int main() {
    array<int,5> marks;
    list<array<int,5>> students;

    for (int s = 1; s <= 5; s++) {
        cout << "Enter 5 subject marks for student " << s << ": ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];  
        }
        students.push_back(marks); 
    }

    cout << "\nAll students:\n";
    displayStudents(students);

    removeFailed(students);

    cout << "\nAfter removing students with average < 50:\n";
    displayStudents(students);

    return 0;
}

