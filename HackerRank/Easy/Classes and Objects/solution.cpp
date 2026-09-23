// HackerRank Problem: Classes and Objects
// Link: https://www.hackerrank.com/challenges/classes-objects/problem
// Difficulty: Easy
// Language: cpp


// Write your Student class here
class Student {
private:
    vector<int> scores;

public:
    void input() {
        for (int i = 0; i < 5; i++) {
            int score;
            cin >> score;
            scores.push_back(score);
        }
    }

    int calculateTotalScore() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += scores[i];
        }
        return total;
    }
};
