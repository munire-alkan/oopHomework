#include <iostream>
#include <string>
using namespace std;
class TestScores {
private:
    int testScore1;
    int testScore2;
    int testScore3;

public:

    TestScores(int s1, int s2, int s3) {
        testScore1 = s1;
        testScore2 = s2;
        testScore3 = s3;
    }


    void setTestScore1(int s1) { testScore1 = s1; }
    void setTestScore2(int s2) { testScore2 = s2; }
    void setTestScore3(int s3) { testScore3 = s3; }


    int getTestScore1() {
        return testScore1; }
    int getTestScore2() {
        return testScore2; }
    int getTestScore3() {
        return testScore3; }


    double getAverage() {
        return (static_cast<double>(testScore1 + testScore2 + testScore3) / 3.0);
    }
};

int main()
{
    int score1, score2, score3;

    cout << "Enter the first test score: ";
    cin >> score1;
    cout << "Enter the second test score: ";
    cin >> score2;
    cout << "Enter the third test score: ";
    cin >> score3;

    TestScores ts(score1, score2, score3);

    cout << "The average test score is: " << ts.getAverage() << "\n";
return 0;
}
