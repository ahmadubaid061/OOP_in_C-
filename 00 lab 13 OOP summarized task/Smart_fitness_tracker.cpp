#include <iostream>
#include <string>
using namespace std;

class FitnessDevice {
protected:
    int deviceID;
    int batteryStatus;

public:
    FitnessDevice(int id , int battery) {
        deviceID = id;
        batteryStatus = battery;
    }

    virtual void showDetails() = 0; 

    ~FitnessDevice() {};
};

class SmartTracker : public FitnessDevice {
private:
    double distance;     
    int heartRate;
    int caloriesBurned;
    static int count;    

public:
    SmartTracker(int id, int battery,
                 double d, int hr, int cal ) : FitnessDevice(id, battery) {
        distance = d;
        heartRate = hr;
        caloriesBurned = cal;
        count++;
        cout << "SmartTracker [" << deviceID << "] created." << endl;
    }

    SmartTracker(const SmartTracker &other) : FitnessDevice(other.deviceID, other.batteryStatus) {
        distance = other.distance;
        heartRate = other.heartRate;
        caloriesBurned = other.caloriesBurned;
        count++;
        cout << "SmartTracker [" << deviceID << "] copied." << endl;
    }

    ~SmartTracker() {
        count--;
        cout << "SmartTracker [" << deviceID << "] destroyed." << endl;
    }

    void showDetails() override {
        cout << "Device ID: " << deviceID << endl;
        cout << "Battery: " << batteryStatus << "%" << endl;
        cout << "Distance: " << distance << " km" << endl;
        cout << "Heart Rate: " << heartRate << " bpm" << endl;
        cout << "Calories Burned: " << caloriesBurned << endl;
    }

    static void showCount() {
        cout << "Total SmartTracker objects: " << count << endl;
    }

    SmartTracker operator+(const SmartTracker &s) {
    	int id=this->deviceID + count;
        SmartTracker temp(id, 0, 0, 0, 0);  
	    temp.batteryStatus = (this->batteryStatus + s.batteryStatus) / 2;
	    temp.distance = this->distance + s.distance;
	    temp.heartRate = (this->heartRate + s.heartRate) / 2;
	    temp.caloriesBurned = this->caloriesBurned + s.caloriesBurned;

    return temp; 
   }
};

int SmartTracker::count = 0;

int main() {
    SmartTracker *t1 = new SmartTracker(11, 90, 5.2, 80, 250);
    SmartTracker *t2 = new SmartTracker(12, 85, 7.5, 75, 300);
    SmartTracker *t3 = new SmartTracker(13, 88, 10.0, 78, 400);

    cout << "\n--- Tracker Details ---\n";
    t1->showDetails();
    cout << endl;
    t2->showDetails();
    cout << endl;
    t3->showDetails();

    SmartTracker::showCount();

    cout << "\n--- Combining Trackers ---\n";
    SmartTracker t4 = *t1 + *t2;
    t4.showDetails();

    SmartTracker::showCount();

    cout << "\n--- Copy Constructor Demo ---\n";
    SmartTracker t5 = *t3;
    t5.showDetails();

    SmartTracker::showCount();

    cout << "\n--- Deleting Objects ---\n";
    delete t1;
    SmartTracker::showCount();

    delete t2;
    SmartTracker::showCount();

    delete t3;
    SmartTracker::showCount();

    return 0;
}
