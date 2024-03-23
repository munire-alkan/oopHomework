#include <iostream>
#include <string>

using namespace std;
class Circle {
private:
    double radius;
    const double pi = 3.14159;

public:

    Circle() {
        radius = 0.0;
    }


    Circle(double r) {
        radius = r;
    }


    void setRadius(double r) {
        radius = r;
    }


    double getRadius() {
        return radius;
    }


    double getArea() {
        return pi * radius * radius;
    }


    double getDiameter() {
        return radius * 2;
    }


    double getCircumference() {
        return 2 * pi * radius;
    }
};

int main()
{
    double radius;

    cout << "Enter the circle's radius: ";
    cin >> radius;

    Circle c(radius);

    cout << "The circle's area is: " << c.getArea() << "\n";
    cout << "The circle's diameter is: " << c.getDiameter() << "\n";
    cout << "The circle's circumference is: " << c.getCircumference() << "\n";
return 0 ;
}
