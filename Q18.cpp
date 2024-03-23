#include <iostream>
#include <cstdlib>
#include <ctime>

class Die {
public:
    Die() {
        srand(static_cast<unsigned int>(time(0)));
        roll();
    }

    void roll() {
        faceValue_ = rand() % 6 + 1;
    }

    int getFaceValue() const {
        return faceValue_;
    }

private:
    int faceValue_;
};

class GameOf21 {
public:
    GameOf21() : playerTotal_(0), computerTotal_(0) {}

    void play() {
        char choice;


        rollDice(computerDie_);
        computerTotal_ += calculatePoints(computerDie_.getFaceValue(), computerDie_.getFaceValue());

        do {
            std::cout << "Your total: " << playerTotal_ << std::endl;
            std::cout << "Do you want to roll the dice? (y/n): ";
            std::cin >> choice;

            if (choice == 'y' || choice == 'Y') {
                rollDice(playerDie_);
                int points = calculatePoints(playerDie_.getFaceValue(), playerDie_.getFaceValue());
                playerTotal_ += points;
            }

        } while ((choice == 'y' || choice == 'Y') && playerTotal_ <= 21);

        std::cout << "Computer's total: " << computerTotal_ << std::endl;
        std::cout << "Your total: " << playerTotal_ << std::endl;

        if (playerTotal_ <= 21 && (playerTotal_ > computerTotal_ || computerTotal_ > 21)) {
            std::cout << "Congratulations! You win!" << std::endl;
        } else {
            std::cout << "Computer wins!" << std::endl;
        }
    }

private:
    Die playerDie_;
    Die computerDie_;
    int playerTotal_;
    int computerTotal_;

    void rollDice(Die &die) {
        die.roll();
        std::cout << "You rolled: " << die.getFaceValue() << std::endl;
    }

    int calculatePoints(int die1, int die2) {
        int total = die1 + die2;

        if (total == 7) {
            return 0;
        } else if (die1 == die2) {
            return total * 2;
        } else {
            return total;
        }
    }
};

int main() {
    GameOf21 game;
    game.play();

return 0;
}
