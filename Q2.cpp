#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:

    Employee(string n, int id, string dept, string posit) {
        name = n;
        idNumber = id;
        department = dept;
        position = posit;
    }


    Employee(string n, int id) {
        name = n;
        idNumber = id;
        department = "";
        position = "";
    }


    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }


    void setName(string n) {
        name = n; }
    void setIdNumber(int id) {
        idNumber = id; }
    void setDepartment(string dept) {
        department = dept; }
    void setPosition(string posit) {
        position = posit; }


    string getName() {
        return name; }
    int getIdNumber() {
        return idNumber; }
    string getDepartment() {
         return department; }
    string getPosition() {
        return position; }
};
int main() {
    Employee e1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee e2("Mark Jones", 39119, "IT", "Programmer");
    Employee e3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    cout<< setw(20) << "Name" << setw(20) << "ID Number" << setw(20) << "Department" << setw(20) << "Position" << endl;
    cout << setfill('-') << setw(70) << "-" << endl;
    cout << setfill(' ');
    cout << setw(20)<< e1.getName()<< setw(20) << e1.getIdNumber()<< setw(20)<< e1.getDepartment()<< setw(20) << e1.getPosition() << "\n";
    cout<< setw(20) << e2.getName() << setw(20) << e2.getIdNumber()<< setw(20)<< e2.getDepartment() << setw(20)<< e2.getPosition() << "\n";
    cout << setw(20) << e3.getName()<< setw(20) << e3.getIdNumber() << setw(20)<<e3.getDepartment()<< setw(20) << e3.getPosition() << "\n";

return 0;
}
