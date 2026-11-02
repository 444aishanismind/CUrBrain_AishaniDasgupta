#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void reverseSubsegment(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    vector<pair<vector<int>, pair<int, int>>> testCases = {
        {{10, 20, 30, 40, 50, 60}, {1, 4}},
        {{1, 2, 3, 4}, {0, 3}},
        {{7}, {0, 0}},
        {{1, 2, 3, 4, 5}, {2, 4}},
        {{1, 2, 3, 4, 5}, {0, 2}}
    };

    for (int t = 0; t < testCases.size(); t++) {
        reverseSubsegment(testCases[t].first, testCases[t].second.first, testCases[t].second.second);
        for (int i = 0; i < testCases[t].first.size(); i++) {
            cout << testCases[t].first[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}