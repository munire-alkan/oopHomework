#include <iostream>

using namespace std;

class population {
private:
    double nufus;
    double birth;
    double dearth;
public:
    void setNufus(double);
    void setBirth(double);
    void setDearth(double);
    double getNufus() const;
    double getBirth() const;
    double getDearth() const;
    double getKus() const;
    double getDear() const;
};

void population::setBirth(double b) {
    birth = b;
}

void population::setNufus(double n) {
    nufus = n;
}

void population::setDearth(double d) {
    dearth = d;
}

double population::getBirth() const {
    return birth;
}

double population::getDearth() const {
    return dearth;
}

double population::getNufus() const {
    return nufus;
}

double population::getKus() const {
    return birth / nufus;
}

double population::getDear() const {
    return dearth / nufus;
}

int main() {
    population box;
    double popuNufus;
    double popuBirth;
    double popuDearth;


    do {
        cout << "Enter population: ";
        cin >> popuNufus;
        if (popuNufus <= 1) {
            cout << "Population must be greater than 1. Please enter again." << endl;
        }
    } while (popuNufus <= 1);


    do {
        cout << "Enter number of births: ";
        cin >> popuBirth;
        if (popuBirth <= 1) {
            cout << "Number of births must be greater than 1. Please enter again." << endl;
        }
    } while (popuBirth <= 1);

    
    do {
        cout << "Enter number of deaths: ";
        cin >> popuDearth;
        if (popuDearth <= 1) {
            cout << "Number of deaths must be greater than 1. Please enter again." << endl;
        }
    } while (popuDearth <= 1);

    box.setNufus(popuNufus);
    box.setBirth(popuBirth);
    box.setDearth(popuDearth);
    cout << "Birth rate: " << box.getKus() << endl;
    cout << "Death rate: " << box.getDear() << endl;

return 0;
}
