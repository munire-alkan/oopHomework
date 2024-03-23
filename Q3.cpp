#include <iostream>

using namespace std;
class Car {
private:
    int yearModel;
    string make;
    int speed;

public:

    Car(int ym, string m) {
        yearModel = ym;
        make = m;
        speed = 0;
    }


    int getYearModel() {
         return yearModel; }
    string getMake() {
        return make; }
    int getSpeed() {
         return speed; }

    void accelerate() {
        speed += 5;
    }
    void brake() {
        speed -= 5;
    }
};

int main()
{
   Car car(2020, "Tesla");

    cout<<"accelerate :\n";
    for (int i = 0; i < 5; i++) {
        car.accelerate();
        cout << "Current speed: " << car.getSpeed() << "\n";
    }

    cout<<"brake :\n";
    for (int i = 0; i < 5; i++) {
        car.brake();
        cout << "Current speed: " << car.getSpeed() << "\n";
    }
return 0;
}
