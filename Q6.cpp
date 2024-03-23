#include <iostream>
#include <iomanip>
using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:

    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }


    Inventory(int itemNum, int qty, double itemCost) {
        setItemNumber(itemNum);
        setQuantity(qty);
        setCost(itemCost);
        setTotalCost();
    }


    void setItemNumber(int itemNum) {
        if (itemNum >= 0)
            itemNumber = itemNum;
        else
            cout << "Invalid item number! Item number must be non-negative." << endl;
    }

    void setQuantity(int qty) {
        if (qty >= 0)
            quantity = qty;
        else
            cout << "Invalid quantity! Quantity must be non-negative." << endl;
    }

    void setCost(double itemCost) {
        if (itemCost >= 0)
            cost = itemCost;
        else
            cout << "Invalid cost! Cost must be non-negative." << endl;
    }

    void setTotalCost() {
        totalCost = quantity * cost;
    }

    int getItemNumber() const {
        return itemNumber;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }

    double getTotalCost() const {
        return totalCost;
    }
};

int main() {

    Inventory item1;
    item1.setItemNumber(1001);
    item1.setQuantity(10);
    item1.setCost(5.99);
    item1.setTotalCost();

    Inventory item2(1002, 20, 8.49);


    cout << "Item 1:" << endl;
    cout << "Item Number: " << item1.getItemNumber() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Cost: $" << fixed << setprecision(2) << item1.getCost() << endl;
    cout << "Total Cost: $" << fixed << setprecision(2) << item1.getTotalCost() << endl << endl;

    cout << "Item 2:" << endl;
    cout << "Item Number: " << item2.getItemNumber() << endl;
    cout << "Quantity: " << item2.getQuantity() << endl;
    cout << "Cost: $" << fixed << setprecision(2) << item2.getCost() << endl;
    cout << "Total Cost: $" << fixed << setprecision(2) << item2.getTotalCost() << endl;

return 0 ;
}
