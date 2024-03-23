#include <iostream>
#include <string>

using namespace std;

class Question {
private:
    string question;
    string options[4];
    int correctAnswer;

public:
    Question(string ques, string opt1, string opt2, string opt3, string opt4, int correct)
        : question(ques), correctAnswer(correct) {
        options[0] = opt1;
        options[1] = opt2;
        options[2] = opt3;
        options[3] = opt4;
    }

    string getQuestion() const {
        return question;
    }

    string getOption(int index) const {
        return options[index];
    }

    int getCorrectAnswer() const {
        return correctAnswer;
    }
};

void displayQuestion(const Question& ques) {
    cout << ques.getQuestion() << endl;
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ". " << ques.getOption(i) << endl;
    }
}

void playTriviaGame(const Question questions[], int numQuestions) {
    int player1Score = 0, player2Score = 0;

    for (int i = 0; i < numQuestions; ++i) {
        cout << "Question " << i + 1 << endl;
        displayQuestion(questions[i]);

        int answer;
        cout << "Enter your answer (1-4): ";
        cin >> answer;

        if (answer == questions[i].getCorrectAnswer()) {
            cout << "Correct! You earn a point." << endl;
            player1Score++;
        } else {
            cout << "Incorrect! The correct answer was: " << questions[i].getCorrectAnswer() << endl;
        }
    }

    cout << "Player 1's score: " << player1Score << endl;
    cout << "Player 2's score: " << player2Score << endl;

    if (player1Score > player2Score) {
        cout << "Player 1 wins!" << endl;
    } else if (player1Score < player2Score) {
        cout << "Player 2 wins!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }
}

int main() {
    Question questions[] = {
        Question("What is the capital of France?", "Paris", "Rome", "Berlin", "London", 1),
        Question("What is the largest planet in our solar system?", "Jupiter", "Saturn", "Mars", "Venus", 1),
        Question("Who wrote 'Romeo and Juliet'?", "William Shakespeare", "Charles Dickens", "Jane Austen", "Mark Twain", 1),
        Question("What is the chemical symbol for water?", "H2O", "CO2", "NaCl", "O2", 1),
        Question("Which animal is known as the 'King of the Jungle'?", "Lion", "Tiger", "Elephant", "Giraffe", 1),
        Question("What year did the Titanic sink?", "1912", "1898", "1923", "1906", 1),
        Question("What is the tallest mountain in the world?", "Mount Everest", "K2", "Kangchenjunga", "Lhotse", 1),
        Question("Who painted the Mona Lisa?", "Leonardo da Vinci", "Pablo Picasso", "Vincent van Gogh", "Michelangelo", 1),
        Question("What is the capital of Japan?", "Tokyo", "Beijing", "Seoul", "Bangkok", 1),
        Question("What is the currency of Brazil?", "Brazilian Real", "Peso", "Euro", "Dollar", 1)
    };

    playTriviaGame(questions, 10);

    return 0;
}
