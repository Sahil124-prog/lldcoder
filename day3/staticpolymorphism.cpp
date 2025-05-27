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

//Overloading accelerate Static Polymorphism
void accelerate(){
if (!isEngineon) {
cout << brand <<< <<< model <<< : Cannot accelerate! Engine is off." << endl;
return;
}
currentSpeed += 20;
cout << brand << " " << model <<<": Accelerating to "<<<< currentSpeed << "km/h" << endl;
}
void accelerate(int speed) {
if (!isEngineon) (
cout << brand <<" "<<model<<" : Cannot accelerate! Engine is off." << endl;
return;
}
currentSpeed += speed;
cout << brand <<<< model <<": Accelerating to" << currentSpeed << "km/h" << endl;
}

void brake() {

currentSpeed -= 20;

if (currentSpeed < 0) currentSpeed = 0;

cout << brand << " <<< model << " Braking! Speed is now" << currentSpeed <<<<< km/h" << endl;
}
void shiftGear(int gear) {
currentGear = gear;
cout << brand <<<< model <<< Shifted to gear <<<<< currentGear << endl;
}
};


// Main function

int main() {

ManualCar myManualCar = new ManualCar("Suzuki", "WagonR");
myManualCar->start Engine();
myManualCar->accelerate();
myManualCar->accelerate (40);
myManualCar->brake();
myManualCar->stopEngine();
// Cleanup
delete myManualCar;
return 0;
}