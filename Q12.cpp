#include <iostream>
#include <ctime>
#include <cstdlib>

class Coin {
private:
    std::string sideUp;

public:
    Coin() {
        toss();
    }

    void toss() {
        if (rand() % 2 == 0) {
            sideUp = "heads";
        } else {
            sideUp = "tails";
        }
    }

    std::string getSideUp() const {
        return sideUp;
    }
};

int main() {
    srand(static_cast<unsigned int>(time(NULL)));

    Coin myCoin;

    std::cout << "Initially facing up: " << myCoin.getSideUp() << std::endl;

    int headsCount = 0;
    int tailsCount = 0;

    for (int i = 0; i < 20; ++i) {
        myCoin.toss();
        std::cout << "Toss " << i + 1 << ": " << myCoin.getSideUp() << std::endl;

        if (myCoin.getSideUp() == "heads") {
            headsCount++;
        } else {
            tailsCount++;
        }
    }

    std::cout << "\nNumber of times heads facing up: " << headsCount << std::endl;
    std::cout << "Number of times tails facing up: " << tailsCount << std::endl;

return 0;
}
