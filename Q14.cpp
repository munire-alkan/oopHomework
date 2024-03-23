#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Die {
public:
    Die() {
        srand(time(0));
    }

    int roll() const {
        return rand() % 6 + 1;
    }
};

class FishingGame {
private:
    int totalPoints;

public:
    FishingGame() : totalPoints(0) {}

    void play() {
        Die die;
        int choice;

        do {
            cout << "Do you want to continue fishing? (1 for Yes, 0 for No): ";
            cin >> choice;

            if (choice == 1) {
                int result = die.roll();
                switch (result) {
                    case 1:
                        cout << "You caught a huge fish! +5 points\n";
                        totalPoints += 5;
                        break;
                    case 2:
                        cout << "You caught an old shoe! +1 point\n";
                        totalPoints += 1;
                        break;
                    case 3:
                        cout << "You caught a little fish! +3 points\n";
                        totalPoints += 3;
                        break;
                    case 4:
                        cout << "You caught a seaweed! +1 point\n";
                        totalPoints += 1;
                        break;
                    case 5:
                        cout << "You caught a crab! +2 points\n";
                        totalPoints += 2;
                        break;
                    case 6:
                        cout << "You caught a starfish! +2 points\n";
                        totalPoints += 2;
                        break;
                    default:
                        break;
                }
            }
        } while (choice == 1);

        cout << "\nTotal Fishing Points: " << totalPoints << endl;

        if (totalPoints >= 10) {
            cout << "Congratulations! You are a Master Fisher!\n";
        } else if (totalPoints >= 5) {
            cout << "Well done! You are a Good Fisher!\n";
        } else {
            cout << "Better luck next time! You need more practice!\n";
        }
    }
};

int main() {
    FishingGame game;
    game.play();

return 0;
}
