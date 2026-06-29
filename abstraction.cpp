#include <iostream>
#include <string>
using namespace std;
// Abstract Class
class Car
{
public:
    virtual void startEngine() = 0;
    virtual void gearShift(int gear) = 0;
    virtual void accelerate() = 0;
    virtual void brake() = 0;
    virtual void stopEngine() = 0;
    virtual ~Car() {}
};
// Derived Class
class SportsCar : public Car
{
public:
    string brand;
    string model;
    bool isEngineOn;
    int currentSpeed;
    int currentGear;
    SportsCar(string b, string m)
    {
        brand = b;
        model = m;
        isEngineOn = false;
        currentSpeed = 0;
        currentGear = 0; // Neutral
    }
    void startEngine() override
    {
        isEngineOn = true;
        cout << brand << " " << model
             << " : Engine starts with a roar!" << endl;
    }
    void gearShift(int gear) override
    {
        if (!isEngineOn)
        {
            cout << brand << " " << model
                 << " : Engine is off! Cannot shift gear." << endl;
            return;
        }
        currentGear = gear;
        cout << brand << " " << model
             << " : Shifted to gear " << currentGear << endl;
    }
    void accelerate() override
    {
        if (!isEngineOn)
        {
            cout << brand << " " << model
                 << " : Engine is off! Cannot accelerate." << endl;
            return;
        }
        currentSpeed += 20;
        cout << brand << " " << model
             << " : Accelerating to "
             << currentSpeed << " km/h" << endl;
    }
    void brake() override
    {
        currentSpeed -= 20;
        if (currentSpeed < 0)
            currentSpeed = 0;
        cout << brand << " " << model
             << " : Braking! Speed is now "
             << currentSpeed << " km/h" << endl;
    }
    void stopEngine() override
    {
        isEngineOn = false;
        currentGear = 0;
        currentSpeed = 0;
        cout << brand << " " << model
             << " : Engine turned off." << endl;
    }
};
int main()
{
    Car *car = new SportsCar("Ferrari", "488 GTB");
    car->startEngine();
    car->gearShift(1);
    car->accelerate();
    car->accelerate();
    car->brake();
    car->stopEngine();
    delete car;
    return 0;
}