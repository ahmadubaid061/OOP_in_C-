#include <iostream>
using namespace std;

class polygon {
public:
    float length;
    float* width;

    polygon(float a, float b) {
        length = a;
        width = new float(b);
    }
    
    polygon(polygon &p) {
        length = p.length;
        width = p.width; 
    }

    void display() {
        cout << "length is: " << length << endl;
        cout << "width is : " << *width << endl;
    }

    ~polygon() {
        delete width; 
    }
};

int main() {
    polygon one(4.0, 5.0);
    polygon two(one); 

    cout << "--------------------------Initial values----" << endl;
    cout<<"\n----------object one--"<<endl;
    one.display();
    cout<<"\n----------object two--"<<endl;
    two.display();

    cout << "\n------------------------Changing one's data----" << endl;
    
    one.length = 6;
    *one.width = 10;  
    cout<<"\n----------object one--"<<endl;
    one.display();
    cout<<"\n----------object two--"<<endl;
    two.display();  

    return 0;
}

