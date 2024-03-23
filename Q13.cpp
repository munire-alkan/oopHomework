#include <iostream>
#include <ctime>
#include <cstdlib>

class Coin {
private:
    std::string sideUp;
public:

    Coin() {
        srand(time(0));
        toss();
    }

    void toss() {

        int randomNumber = rand() % 2;

        if (randomNumber == 0) {
            sideUp = "Heads";
        } else {
            sideUp = "Tails";
        }
    }


    std::string getSideUp() {
        return sideUp;
    }

    int getValue() {
        if (sideUp == "Heads") {
            if (sideUp == "Quarter") {
                return 25;
            } else if (sideUp == "Dime") {
                return 10;
            } else {
                return 5;
            }
        }
        return 0;
    }
};

int main() {
    Coin quarter, dime, nickel;
    double balance = 0.0;

    while (balance < 1.0) {

        quarter.toss();
        dime.toss();
        nickel.toss();

        std::cout << "Quarter: " << quarter.getSideUp() << std::endl;
        std::cout << "Dime: " << dime.getSideUp() << std::endl;
        std::cout << "Nickel: " << nickel.getSideUp() << std::endl;

        balance += (quarter.getValue() + dime.getValue() + nickel.getValue()) / 100.0;


        std::cout << "Balance: $" << balance << std::endl;
        std::cout << "--------------------------" << std::endl;
    }


    if (balance == 1.0) {
        std::cout << "Congratulations! You win!" << std::endl;
    } else {
        std::cout << "Sorry, you lose!" << std::endl;
    }

return 0;
}
