//:Create a structure course with some attributes i.e course_ID, course_title, credit_hrs . Then 
//Implement
// following 5 functions (CREATE, READ, UPDATE, DELETE,SEARCH operations):
// 1. addAStudent
// 2. updateAStudent
// 3. deleteAStudent
// 4. searchAndDisplayAStudent
// 5. displayAllstudents
// After that, create an array of 5 courses in main function. Create a menu in main function to enable user 
//to select and perform the operations we created above. Program must not exit until and unless user 
//wants to do so.
#include <iostream>
using namespace std;
const int SIZE = 5;
// Structure for Course
struct Course {
    int course_id;
    string course_title;
    float credit_hrs;
};

void addACourse(Course courses[], int &count) {
    if (count >= SIZE) {
        cout << "Cannot add more courses. Array is full!\n";
        return;
    }
    cout << "Enter course ID: ";
    cin >> courses[count].course_id;
    cout << "Enter course title: ";
    cin.ignore(); 
    getline(cin, courses[count].course_title);
    cout << "Enter credit hours: ";
    cin >> courses[count].credit_hrs;

    count++;
    cout << "Course added successfully!\n";
}

void updateCourse(Course courses[], int count) {
    int id;
    cout << "Enter course ID to update: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (courses[i].course_id == id) {
            cout << "Enter new title: ";
            cin.ignore();
            getline(cin, courses[i].course_title);
            cout << "Enter new credit hours: ";
            cin >> courses[i].credit_hrs;
            cout << "Course updated successfully!\n";
            return;
        }
    }
    cout << "Course not found!\n";
}

void deleteCourse(Course courses[], int &count) {
    int id;
    cout << "Enter course ID to delete: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (courses[i].course_id == id) {
            for (int j = i; j < count - 1; j++) {
                courses[j] = courses[j + 1];
            }
            count--;
            cout << "Course deleted successfully!\n";
            return;
        }
    }
    cout << "Course not found!\n";
}

void searchAndDisplayCourse(Course courses[], int count) {
    int id;
    cout << "Enter course ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (courses[i].course_id == id) {
            cout << "Course found!\n";
            cout << "ID: " << courses[i].course_id 
                 << ", Title: " << courses[i].course_title 
                 << ", Credit Hours: " << courses[i].credit_hrs << endl;
            return;
        }
    }
    cout << "Course not found!\n";
}

void displayAllCourses(Course courses[], int count) {
    if (count == 0) {
        cout << "No courses available!\n";
        return;
    }
    cout << "All Courses:\n";
    for (int i = 0; i < count; i++) {
        cout << "ID: " << courses[i].course_id 
             << ", Title: " << courses[i].course_title 
             << ", Credit Hours: " << courses[i].credit_hrs << endl;
    }
}

int main() {
    Course courses[SIZE];
    int count = 0;
    char option;

    do {
        cout << "\nMain Menu:\n";
        cout << "Press 1 to add a Course\n";
        cout << "Press 2 to update a Course\n";
        cout << "Press 3 to delete a Course\n";
        cout << "Press 4 to search and display a Course\n";
        cout << "Press 5 to display all Courses\n";
        cout << "Press e to exit the program\n";
        cout << "Enter option: ";
        cin >> option;

        switch (option) {
            case '1': addACourse(courses, count); break;
            case '2': updateCourse(courses, count); break;
            case '3': deleteCourse(courses, count); break;
            case '4': searchAndDisplayCourse(courses, count); break;
            case '5': displayAllCourses(courses, count); break;
            case 'e': cout << "Exiting program...\n"; break;
            default: cout << "Invalid option! Try again.\n";
        }
    } while (option != 'e');

    return 0;
}

