#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int mostPopularItem(vector<int>& sales) {
    unordered_map<int, int> freq;
    for (int id : sales) {
        freq[id]++;
    }

    int bestId = sales[0];
    int maxFreq = 0;

    for (auto pair : freq) {
        int id = pair.first;
        int count = pair.second;

        if (count > maxFreq) {
            maxFreq = count;
            bestId = id;
        } else if (count == maxFreq) {
            if (id < bestId) {
                bestId = id;
            }
        }
    }

    return bestId;
}

int main() {
    vector<vector<int>> testCases = {
        {101, 103, 101, 102, 103, 105, 101, 103},
        {5, 5, 5, 2, 2, 2, 2},
        {99},
        {-2, -2, 3, 3, 8},
        {4, 1, 4, 1, 7}
    };

    for (auto tc : testCases) {
        cout << mostPopularItem(tc) << "\n";
    }

    return 0;
}