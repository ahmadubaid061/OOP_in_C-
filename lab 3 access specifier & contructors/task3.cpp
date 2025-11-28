#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int price;
public:
    Car(string b, int p) {
        brand = b;
        price = p;
    }
    
    Car(const Car &c){
        brand = c.brand;
        price = c.price;
    }

    void displayCar(Car c) 
	{
       
        cout << "Brand: " << c.brand << ", Price: " << c.price << endl;
    }
};

int main() {
    Car c1("Ferrari", 2000);
    c1.displayCar(c1); 
}

