#include <iostream>
using namespace std;

class PayRoll {
private:
    double hourlyPayRate;
    double hoursWorked;
    double totalPay;

public:
    PayRoll() : hourlyPayRate(0.0), hoursWorked(0.0), totalPay(0.0) {}

    void setHourlyPayRate(double rate) {
        hourlyPayRate = rate;
    }

    void setHoursWorked(double hours) {
        if (hours <= 60) {
            hoursWorked = hours;
        } else {
            cout << "Error: Hours worked cannot exceed 60. Setting hours worked to 60." << endl;
            hoursWorked = 60;
        }
    }

    void calculateTotalPay() {
        totalPay = hourlyPayRate * hoursWorked;
    }

    double getTotalPay() const {
        return totalPay;
    }
};

int main() {
    const int NUM_EMPLOYEES = 7;
    PayRoll employees[NUM_EMPLOYEES];
    double hours;

    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        cout << "Enter the number of hours worked by employee " << i + 1 << ": ";
        cin >> hours;
        employees[i].setHoursWorked(hours);
    }

    double payRate;
    cout << "\nEnter the hourly pay rate for each employee:" << endl;
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        cout << "Employee " << i + 1 << ": ";
        cin >> payRate;
        employees[i].setHourlyPayRate(payRate);
    }

    cout << "\nGross pay for each employee:" << endl;
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        employees[i].calculateTotalPay();
        cout << "Employee " << i + 1 << ": $" << employees[i].getTotalPay() << endl;
    }

return 0;
}
