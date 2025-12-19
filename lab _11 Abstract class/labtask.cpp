#include <iostream>
using namespace std;

const int n = 5;

class student {
protected:
    string name;
    int id;
    int age;

public:
    virtual void display() = 0;
    virtual float calculateGpa() = 0;
};

class UnderG : public student {
public:
    int grades[n];

    void readStudent() {
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter ID  : ";
        cin >> id;

        cout << "Enter age : ";
        cin >> age;

        cout << "Enter marks in 5 subjects: ";
        for (int i = 0; i < n; i++) {
            cin >> grades[i];
        }
    }

    float calculateGpa() {
        float totalPercent = 0;

        for (int i = 0; i < n; i++) {
            totalPercent += grades[i];
        }

        float avgPercent = totalPercent / n;
        return (avgPercent / 100) * 4;   // GPA out of 4
    }

    void display() {
        cout << "\n--- Undergraduate Student ---\n";
        cout << "Name  : " << name << endl;
        cout << "ID    : " << id << endl;
        cout << "Age   : " << age << endl;
        cout << "Grades: ";

        for (int i = 0; i < n; i++) {
            cout << grades[i] << " ";
        }

        cout << "\nGPA   : " << calculateGpa() << endl;
    }
};



class Graduate : public student {
public:
    int grades[n];

    void readStudent() {
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter ID  : ";
        cin >> id;

        cout << "Enter age : ";
        cin >> age;

        cout << "Enter marks in 5 subjects: ";
        for (int i = 0; i < n; i++) {
            cin >> grades[i];
        }
    }

    float calculateGpa() {
        float totalPercent = 0;

        for (int i = 0; i < n; i++) {
            totalPercent += grades[i];
        }

        float avgPercent = totalPercent / n;

        return (avgPercent / 100) * 4;
    }

    void display() {
        cout << "\n--- Graduate Student ---\n";
        cout << "Name  : " << name << endl;
        cout << "ID    : " << id << endl;
        cout << "Age   : " << age << endl;
        cout << "Grades: ";

        for (int i = 0; i < n; i++) {
            cout << grades[i] << " ";
        }

        cout << "\nGPA   : " << calculateGpa() << endl;
    }
};


int main() {

    UnderG ug1, ug2;
    Graduate g1, g2;

    student* s[4];

    s[0] = &ug1;
    s[1] = &ug2;
    s[2] = &g1;
    s[3] = &g2;

    cout << "\nEnter Undergraduate Student 1\n";
    ug1.readStudent();

    cout << "\nEnter Undergraduate Student 2\n";
    ug2.readStudent();

    cout << "\nEnter Graduate Student 1\n";
    g1.readStudent();

    cout << "\nEnter Graduate Student 2\n";
    g2.readStudent();

    cout << "\n\n===== STUDENT DETAILS (Using Polymorphism) =====\n";

    for (int i = 0; i < 4; i++) {
        s[i]->display();
    }

    return 0;
}

