#include <iostream>
#include <string>

using namespace std;

class PersonalInformation {
private:
    string name;
    string address;
    int age;
    string phoneNumber;

public:

    PersonalInformation(string personName, string personAddress, int personAge, string personPhoneNumber) {
        name = personName;
        address = personAddress;
        age = personAge;
        phoneNumber = personPhoneNumber;
    }


    string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }

    int getAge() const {
        return age;
    }

    string getPhoneNumber() const {
        return phoneNumber;
    }


    void setName(string newName) {
        name = newName;
    }

    void setAddress(string newAddress) {
        address = newAddress;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setPhoneNumber(string newPhoneNumber) {
        phoneNumber = newPhoneNumber;
    }
};

int main() {

    PersonalInformation myInformation("munire alkan", "123 gaziantep, City", 19, "123-674-987");
    PersonalInformation friend1Information("esra gokalp", "456 elazig, Town", 24, "475-234-733");
    PersonalInformation friend2Information("seden tekin", "789 istanbul, Village", 20, "505-728-263");


    cout << "My Information:" << endl;
    cout << "Name: " << myInformation.getName() << endl;
    cout << "Address: " << myInformation.getAddress() << endl;
    cout << "Age: " << myInformation.getAge() << endl;
    cout << "Phone Number: " << myInformation.getPhoneNumber() << endl << endl;

    cout << "Friend 1's Information:" << endl;
    cout << "Name: " << friend1Information.getName() << endl;
    cout << "Address: " << friend1Information.getAddress() << endl;
    cout << "Age: " << friend1Information.getAge() << endl;
    cout << "Phone Number: " << friend1Information.getPhoneNumber() << endl << endl;

    cout << "Friend 2's Information:" << endl;
    cout << "Name: " << friend2Information.getName() << endl;
    cout << "Address: " << friend2Information.getAddress() << endl;
    cout << "Age: " << friend2Information.getAge() << endl;
    cout << "Phone Number: " << friend2Information.getPhoneNumber() << endl;

return 0;
}
