#include <iostream>
#include <iomanip>
using namespace std;
class RetailItem {
private:
    string description;
    int unitsOnHand;
    double cost;

public:

    RetailItem(string d, int u, double p) {
        description = d;
        unitsOnHand = u;
        cost = p;
    }


    void setDescription(string d) {
         description = d; }
    void setUnitsOnHand(int u) { 
        unitsOnHand = u; }
    void setCost(double p) { 
        cost = p; }


    string getDescription() {
         return description; }
    int getUnitsOnHand() {
        return unitsOnHand; }
    double getCost() {
        return cost; }
};


int main() {
    RetailItem ri1("Jacket", 12, 59.95);
    RetailItem ri2("Jeans", 40, 34.95);
    RetailItem ri3("Shirt", 20, 24.95);

    cout<< setw(20)<< "Description" << setw(20)<< "Units on Hand" << setw(20) << "Cost"<<endl;
    cout << setfill('-') << setw(70) << "-" << endl;
    cout << setfill(' ');

    cout<<"item #1"<<setw(15)<< ri1.getDescription()<< setw(20)  << ri1.getUnitsOnHand() << setw(20) << ri1.getCost() << "\n";
    cout <<"item #2"<<setw(15)<< ri2.getDescription() << setw(20) << ri2.getUnitsOnHand() << setw(20) << ri2.getCost() << "\n";
    cout<<"item #3"<<setw(15) << ri3.getDescription()<< setw(20)  << ri3.getUnitsOnHand() << setw(20) << ri3.getCost() << "\n";

return 0;
}
