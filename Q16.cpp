#include <iostream>
#include <vector>

using namespace std;

int getSecondHighestScore(vector<int>& scores) {
    int highest = 0;
    int secondHighest = 0;
    bool hasHighest = false;
    bool hasSecondHighest = false;

    for (int i = 0; i < (int)scores.size(); ++i) {
        int score = scores[i];
        if (!hasHighest || score > highest) {
            if (hasHighest) {
                secondHighest = highest;
                hasSecondHighest = true;
            }
            highest = score;
            hasHighest = true;
        } else if (score < highest) {
            if (!hasSecondHighest || score > secondHighest) {
                secondHighest = score;
                hasSecondHighest = true;
            }
        }
    }

    return hasSecondHighest ? secondHighest : -1;
}

int main() {
    vector<int> s1 = {50, 40, 50, 30};
    cout << getSecondHighestScore(s1) << endl;

    vector<int> s2 = {100, 100, 100};
    cout << getSecondHighestScore(s2) << endl;

    vector<int> s3 = {};
    cout << getSecondHighestScore(s3) << endl;

    vector<int> s4 = {10, 20, 30, 40};
    cout << getSecondHighestScore(s4) << endl;

    vector<int> s5 = {5, 5, 4, 4, 3};
    cout << getSecondHighestScore(s5) << endl;

    return 0;
}
