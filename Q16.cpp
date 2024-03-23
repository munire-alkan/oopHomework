#include <iostream>

class Temperature {
private:
    double temperature;

public:
    Temperature(double temp = 0.0) : temperature(temp) {}

    double getTemperature() const {
        return temperature;
    }

    void setTemperature(double temp) {
        temperature = temp;
    }

    bool isEthylFreezing() const {
        return temperature <= -114.1;
    }

    bool isEthylBoiling() const {
        return temperature >= 78.37;
    }

    bool isOxygenFreezing() const {
        return temperature <= -218.8;
    }

    bool isOxygenBoiling() const {
        return temperature >= -183;
    }

    bool isWaterFreezing() const {
        return temperature <= 0;
    }

    bool isWaterBoiling() const {
        return temperature >= 100;
    }
};

int main() {
    double temp;
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> temp;

    Temperature t(temp);

    std::cout << "\nAt " << temp << "°C:\n";

    if (t.isEthylFreezing()) {
        std::cout << "Ethyl alcohol will freeze.\n";
    }

    if (t.isEthylBoiling()) {
        std::cout << "Ethyl alcohol will boil.\n";
    }

    if (t.isOxygenFreezing()) {
        std::cout << "Oxygen will freeze.\n";
    }

    if (t.isOxygenBoiling()) {
        std::cout << "Oxygen will boil.\n";
    }

    if (t.isWaterFreezing()) {
        std::cout << "Water will freeze.\n";
    }

    if (t.isWaterBoiling()) {
        std::cout << "Water will boil.\n";
    }

return 0;
}
