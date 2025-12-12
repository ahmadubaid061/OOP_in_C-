#include <iostream>
#include <forward_list>
#include <array>
using namespace std;
int main() {
    forward_list<array<int,3>> products;  
    int totalProducts = 5;

    cout << "Enter 5 products (ID, Price, Quantity):\n";

    for(int i = 0; i < totalProducts; i++) {
        int id, price, qty;

        cout << "\nProduct " << i+1 << " ID: ";
        cin >> id;

        cout << "Product " << i+1 << " Price: ";
        cin >> price;

        cout << "Product " << i+1 << " Quantity: ";
        cin >> qty;

        array<int,3> p = {id, price, qty};
        auto it = products.before_begin();
        for (auto &x : products) ++it;
        products.insert_after(it, p);
    }

    cout << "\n--- Inventory Stored Successfully ---\n";
    cout << "\nAll Products:\n";
    for (auto &p : products) {
        cout << "ID: " << p[0]
             << ", Price: " << p[1]
             << ", Quantity: " << p[2] << endl;
    }

    cout << "\n--- Serving (removing) products one by one ---\n";

    for (int i = 0; i < totalProducts; i++) {

        if (!products.empty()) {
            array<int,3> &p = products.front();
            cout << "Removing Product - ID: " << p[0]
                 << ", Price: " << p[1]
                 << ", Quantity: " << p[2] << endl;

            products.pop_front();
        }
        cout << "\nUpdated Product List:\n";
        if (products.empty()) {
            cout << "No products left.\n";
        } else {
            for (auto &p : products) {
                cout << "ID: " << p[0]
                     << ", Price: " << p[1]
                     << ", Quantity: " << p[2] << "   ";
            }
        }
        cout << "\n";
    }
    cout << "\nAll products removed from inventory.\n";

    return 0;
}

