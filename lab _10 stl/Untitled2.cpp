#include <iostream>
#include <forward_list>
#include <list>
#include <string>
using namespace std;

int main() {
    forward_list<string> normalPatients;
    list<string> emergencyPatients;

    int totalPatients = 5;
    cout << "Enter five patients' names and types!\n";
    for (int i = 0; i < totalPatients; i++) {
        string name, type;
        cout << "\nEnter patient " << i + 1 << " name: ";
        getline(cin, name);
        cout << "Enter patient " << i + 1 << " type (normal/emergency): ";
        getline(cin, type);

        if (type == "normal") {
            auto it = normalPatients.before_begin();
            for (auto &x : normalPatients) ++it;  
            normalPatients.insert_after(it, name);
        }
        else if (type == "emergency") {
            emergencyPatients.push_back(name);
        }
        else {
            cout << "Invalid type, skipping...\n";
        }
    }

    cout << "\n--- Serving Patients ---\n";
    for (int i = 0; i < totalPatients; i++) {

        if (!emergencyPatients.empty()) {
            cout << "Serving emergency patient: " << emergencyPatients.front() << endl;
            emergencyPatients.pop_front();
        }
        else if (!normalPatients.empty()) {
            cout << "Serving normal patient: " << normalPatients.front() << endl;
            normalPatients.pop_front();
        }

        cout << "\nUpdated Queues:\n";

        cout << "Emergency Patients: ";
        if (emergencyPatients.empty()) {
            cout << "None";
        } else {
            for (auto &p : emergencyPatients) {
                cout << p << " ";
            }
        }

        cout << "\nNormal Patients: ";
        if (normalPatients.empty()) {
            cout << "None";
        } else {
            for (auto &p : normalPatients) {
                cout << p << " ";
            }
        }

        cout << "\n";
    }
    cout << "\nAll patients have been served.\n";
    return 0;
}

