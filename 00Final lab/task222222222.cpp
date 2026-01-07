#include <iostream>
#include <string>
using namespace std;

class Device {
protected:
    string dName;
    float dPower;

public:
    Device() {
        dName = "";
        dPower = 0;
    }

    virtual void getdata() {
        cout << "Enter Device Name: ";
        cin.ignore();
        getline(cin, dName);
        cout << "Enter Device Power: ";
        cin >> dPower;
    }

    virtual void putdata() {
        cout << "Device Name: " << dName << endl;
        cout << "Device Power: " << dPower << endl;
    }

    virtual bool isoverload() = 0;
};

class TrafficStat {
protected:
    float m1, m2, m3;

public:
    TrafficStat() {
        m1 = m2 = m3 = 0;
    }

    void getMonthsData() {
        cout << "Enter month 1 data: ";
        cin >> m1;
        cout << "Enter month 2 data: ";
        cin >> m2;
        cout << "Enter month 3 data: ";
        cin >> m3;
    }

    void showMonths() {
        cout << "Month 1: " << m1 << endl;
        cout << "Month 2: " << m2 << endl;
        cout << "Month 3: " << m3 << endl;
    }
};

class Router : public Device, public TrafficStat {
    int maxConn;

public:
    Router() {
        maxConn = 0;
    }

    void getdata() {
        Device::getdata();
        cout << "Enter max connections: ";
        cin >> maxConn;
        getMonthsData();
    }

    void putdata() {
        Device::putdata();
        cout << "Max Connections: " << maxConn << endl;
        showMonths();
    }

    bool isoverload() {
    	if(maxConn > 1000){
    		return true;
		}
        else{
        	return false;
		}
    }
};

class Switch : public Device, public TrafficStat {
    int ports;

public:
    Switch() {
        ports = 0;
    }

    void getdata() {
        Device::getdata();
        cout << "Enter ports: ";
        cin >> ports;
        getMonthsData();
    }

    void putdata() {
        Device::putdata();
        cout << "Ports: " << ports << endl;
        showMonths();
    }

    bool isoverload() {
    	if(ports > 48){
    		return true;
		}
        else{
        	return false;
		}
    }
};

int main() {
    Device* dev[6];

    dev[0] = new Router();
    dev[1] = new Router();
    dev[2] = new Router();
    dev[3] = new Switch();
    dev[4] = new Switch();
    dev[5] = new Switch();

    for (int i = 0; i < 6; i++) {
        dev[i]->getdata();
    }

    cout << endl;

    for (int i = 0; i < 6; i++) {
        dev[i]->putdata();
    }

    cout << "\nRouter Overload\n";
    for (int i = 0; i < 3; i++) {
        cout << "Router " << i + 1 << ": " << dev[i]->isoverload() << endl;
    }

    cout << "\nSwitch Overload\n";
    for (int i = 3; i < 6; i++) {
        cout << "Switch " << i - 2 << ": " << dev[i]->isoverload() << endl;
    }

    for (int i = 0; i < 6; i++) {
        delete dev[i];
    }

    return 0;
}

