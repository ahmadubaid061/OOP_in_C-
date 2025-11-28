#include <iostream>
#include <string>
using namespace std;
const int minutesPassed=9;
class HotelOrder {
    string name;
    mutable string placedorder;
    int tableno;
    mutable int bill;

public:
   
    HotelOrder(string n, string order, int t, int b) {
        name = n;
        placedorder = order;
        tableno = t;
        bill = b;
    }

    void showOrder() const {
        cout << "Customer Name: " << name
             << "\nTable No: " << tableno
             << "\nPlaced Order: " << placedorder
             << "\nBill: " << bill << endl;
    }

    void changeOrder(string newOrder, int newBill) const {
    	if (minutesPassed <= 10) { // allowed to change order
            placedorder = newOrder;
            bill = newBill;
            cout << "Order changed successfully within " << minutesPassed << " minutes.\n";
        } else {
            cout << "Sorry! Order change time expired (" << minutesPassed << " minutes passed).\n";
        }        
       
    }
};

int main() {
   const HotelOrder customer("Ubaid", "polao", 12, 700);
    cout << "Before changing order:\n";
    customer.showOrder();

    cout << "\n-----------------------Changing order--------------------\n";
    customer.changeOrder("samosa", 200);

    cout << "\nAfter changing order:\n";
    customer.showOrder();

    return 0;
}

