#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int month, day, year;

public:
    Date(int m, int d, int y) : month(m), day(d), year(y) {}

    void example1() const {
        cout << month << "/" << day << "/" << year << endl;
    }

    void example2() const {
        string months[12] = {"January", "February", "March", "April", "May", "June",
                             "July", "August", "September", "October", "November", "December"};
        cout << months[month - 1] << " " << day << ", " << year << endl;
    }

    void example3() const {
        string months[13] = {"", "January", "February", "March", "April", "May", "June",
                             "July", "August", "September", "October", "November", "December"};
        cout << day << " " << months[month - 1] << " " << year << endl;
    }
};

int main() {
    int month, day, year;

    cout << "Enter month(1-12), day(1-31), and year (separated by spaces): ";
    cin >> month >> day >> year;

    if ((1 <= month && month <= 12) && (1 <= day && day <= 31)) {
        Date date(month, day, year);
        date.example1();
        date.example2();
        date.example3();
    } else {
        cout << "Invalid input for month or day." << endl;
    }

return 0;
}
