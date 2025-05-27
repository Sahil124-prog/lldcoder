#include <iostream>

#include <string>

using namespace std;

class Car {
protected:

    string brand:
    string model;
    bool isEngineon;
    int currentSpeed:
public:

    Car(string b, string m) {
    this->brand = b;
    this->model = m;
    isEngineOn false;
    currentSpeed = 0;
    }
//Common methods for All cars.
void startEngine() {
    isEngineon = true;
    cout << brand <<<< model <<<<< Engine started." << endl;
}

void stopEngine() {
    isEngineOn false;
    currentSpeed 0;
    cout << brand <<""<< model << Engine turned off." << endl;
    }
void accelerate() {

if (!isEngineon) {

    cout << brand <<<< model <<<<< : Cannot accelerate! Engine is off." << endl;
    return;
    }   

currentSpeed += 20;

cout << brand << " " << model <<": Accelerating to" << currentSpeed << "km/h" << endl;
}
void brake() {

currentSpeed = 20;

if (currentSpeed < 0) currentSpeed = 0;

cout << brand <<<< model <<": Braking! Speed is now <<< currentSpeed <<<< km/h" << endl;
}
virtual ~Car(){}
};

class ManualCar: public Car { // Inherits from Car

private:

    int currentGear;  //spcific to Manual Car.

public:
    ManualCar(string b, string m): Car(b, m) (

    currentGear = 0:
}
//Specialized method for Manual Car
void shiftGear(int gear) { // Unique method for ManualCar
    currentGear = gear;
    cout << brand <<<<<< model <<<<< : Shifted to gear" << currentGear endl;
}
};

class ElectricCar: public Car { // Inherits from Car
private:
    int batteryLevel;
public:
    ElectricCar(string b, stringm): Car(b, m) {
    batteryLevel = 100;
    }
    //specialized method for Electric Car

    void chargeBattery() { // Unique method for ElectricCar
    batteryLevel = 100;
    cout << brand <<<< model <<<<< Battery fully charged!" << endl;
    }
 };

 // Main Method
    int main() {
    ManualCar myManualCar new ManualCar("Suzuki", "WagonR");
    myManualCar->startEngine();
    myManualCar->shiftGear (1); //specific to manual car
    myManualCar->accelerate();
    myManualCar->brake();
    myManualCar->stopEngine();
    delete myManualCar;
    cout << "----------------------------"<< endl;

    ElectricCar myElectriccar = new ElectricCar("Tesla", "Model 5");
    myElectricCar->chargeBattery(); //specific to electric car
    myElectricCar->start Engine();
    myElectricCar->accelerate();
    myElectricCar->brake();
    myElectricCar->stopEngine();
    delete myElectricCar;
    return 0;
}