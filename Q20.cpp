#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PatientAccount;
class Surgery;
class Pharmacy;

class PatientAccount {
private:
    int daysInHospital;
    double totalCharges;

public:
    PatientAccount() : daysInHospital(0), totalCharges(0.0) {}

    void setDaysInHospital(int days) {
        daysInHospital = days;
    }

    void updateCharges(double amount) {
        totalCharges += amount;
    }

    double getTotalCharges() const {
        return totalCharges;
    }
};

class Surgery {
public:
    static double getSurgeryCost(int surgeryType) {
        switch(surgeryType) {
            case 1: return 500.0;
            case 2: return 800.0;
            case 3: return 1000.0;
            case 4: return 1200.0;
            case 5: return 1500.0;
            default: return 0.0;
        }
    }

    static void displaySurgeryOptions() {
        cout << "Surgery Options:\n";
        cout << "1. Appendectomy - $500.00\n";
        cout << "2. Cataract surgery - $800.00\n";
        cout << "3. Knee replacement - $1000.00\n";
        cout << "4. Heart bypass surgery - $1200.00\n";
        cout << "5. Brain surgery - $1500.00\n";
    }
};

class Pharmacy {
public:
    static double getMedicationCost(int medicationType) {
        switch(medicationType) {
            case 1: return 50.0;
            case 2: return 80.0;
            case 3: return 100.0;
            case 4: return 120.0;
            case 5: return 150.0;
            default: return 0.0;
        }
    }

    static void displayMedicationOptions() {
        cout << "Medication Options:\n";
        cout << "1. Aspirin - $50.00\n";
        cout << "2. Antibiotics - $80.00\n";
        cout << "3. Painkillers - $100.00\n";
        cout << "4. Antidepressants - $120.00\n";
        cout << "5. Insulin - $150.00\n";
    }
};


int main() {
    PatientAccount patient;

    int surgeryChoice, medicationChoice, days;
    double totalCharges = 0.0;

    cout << "Enter the number of days spent in the hospital: ";
    cin >> days;
    patient.setDaysInHospital(days);

    Surgery::displaySurgeryOptions();
    cout << "Enter the type of surgery (1-5): ";
    cin >> surgeryChoice;
    totalCharges += Surgery::getSurgeryCost(surgeryChoice);
    cout << "Selected Surgery Cost: $" << Surgery::getSurgeryCost(surgeryChoice) << endl;

    Pharmacy::displayMedicationOptions();
    cout << "Enter the type of medication (1-5): ";
    cin >> medicationChoice;
    totalCharges += Pharmacy::getMedicationCost(medicationChoice);
    cout << "Selected Medication Cost: $" << Pharmacy::getMedicationCost(medicationChoice) << endl;

    patient.updateCharges(totalCharges);

    cout << "Total charges for the hospital stay: $" << patient.getTotalCharges() << endl;

 return 0;
}
