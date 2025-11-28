#include <iostream>
using namespace std;

class student {
private:
      string name;
public:
	
    int* age; 
    
    student() {
        name = "empty";
        age = new int(23);
    }

    student(string n, int a) {
        name = n;
        age = new int(a);
    }

    student& operator=(student& s) {
        
            name = s.name;
            age = new int(*s.age);
       
    }

  
    void display() {
        cout << "name is: " << name << endl;
        cout << "age is: " << *age << endl;
    }

   
    ~student() {
        delete age;
    }
};

int main() {
    student s1;
    student s2("ahmad", 20);

    cout << "------------student 1" << endl;
    s1.display();
    cout << "------------student 2" << endl;
    s2.display();

    s1 = s2; 

    cout << "------------After assignment------------" << endl;
    cout << "student 1" << endl;
    s1.display();
    cout << "student 2" << endl;
    s2.display();
   *(s2.age)=13;
    cout << "------------After assignment------------" << endl;
    cout << "student 1" << endl;
    s1.display();
    cout << "student 2" << endl;
    s2.display();
    return 0;
}

