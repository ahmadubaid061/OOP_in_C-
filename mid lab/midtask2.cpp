#include <iostream>
using namespace std;
class WeatherStation {
    string name;
    int* temprature[3];
    int id;
public:
    static int count;
    WeatherStation(string n, int x) {
        name = n;
        id = x;
//        for (int i = 0; i < 3; i++) {
//            temprature[i] = new int;
//        }
        count++;
    }
    WeatherStation(WeatherStation& w) {
        name = w.name;
        id = w.id;
        for (int i = 0; i < 3; i++) {
//            temprature[i] = new int;
//            *(temprature[i]) = *(w.temprature[i]);
                temprature[i]=w.temprature[i];
        }
        count++;
    }
    void readTemprature() {
        for (int i = 0; i < 3; i++) {
            cout << "Enter reading: " << i + 1 << " ";
            cin >> *(temprature[i]);
        }
    }
    int averageT() {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += *(temprature[i]);
        }
        return sum / 3;
    }
    void display() const {
        cout << "location is: " << name << endl;
        cout << "id is: " << id << endl;
        cout << "temprature readings are: ";
        for (int i = 0; i < 3; i++) {
            cout << *(temprature[i]) << " ";
        }
        cout << endl;
    }
    bool operator>(WeatherStation& w) {
        int a = this->averageT();
        int b = w.averageT();
        return a > b;
    }
    ~WeatherStation() {
        for (int i = 0; i < 3; i++) {
            delete temprature[i];
        }
        cout << "memory cleared " << endl;
    }
};
int WeatherStation::count = 0;
int main() {
    WeatherStation w1("pakistan", 24);
    cout << "Enter temprature of last 3 days for station 1" << endl;
    w1.readTemprature();
    int average = w1.averageT();
    cout << "\nStation 1 average temprature is: " << average << endl;
    cout << "\nStation 1 display" << endl;
    w1.display();
    WeatherStation w2(w1);
    cout << "\nStation 2 display" << endl;
    w2.display();
    cout << "NOw Enter temprature of last 3 days for station 2" << endl;
    w2.readTemprature();
    cout << "\nStation 1 display" << endl;
    w1.display();
   
    WeatherStation w3("Iran", 50);
    cout << "Enter temprature of last 3 days for station 3" << endl;
    w3.readTemprature();
    cout << "\nStation 3 display" << endl;
    w3.display();
    if (w1 > w3) {
        cout << "\nStation 1 average is greater than station 3" << endl;
    } else {
        cout << "\nStation 3 average is greater than or equals station 1" << endl;
    }
    int c = w1.count;
    cout << "\ntotal " << c << " number of stations created" << endl;
    return 0;
}

