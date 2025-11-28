#include <iostream>
using namespace std;
class Box {
private:
    int length;
public:
	Box(int l) {
	   length = l;
	}
     // Declaration only (not definition)
    friend void showLength(Box b);
};
// Definition outside the class
void showLength(Box b) {
    cout<<"Length of box: "<< b.length <<endl;
}

int main() {
	Box box1(15);
	showLength(box1); // friend function accessing private data
	return 0;
}
