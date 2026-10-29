#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int minAbsoluteValue(vector<int>& arr) {
    int bestVal = arr[0];
    int minAbs = abs(arr[0]);
    for (int i = 1; i < (int)arr.size(); ++i) {
        int currentAbs = abs(arr[i]);
        if (currentAbs < minAbs) {
            minAbs = currentAbs;
            bestVal = arr[i];
        }
    }
    return bestVal;
}

int main() {
    vector<int> arr1 = {10, -5, -2, 4, 2};
    cout << minAbsoluteValue(arr1) << endl;

    vector<int> arr2 = {-3, 3};
    cout << minAbsoluteValue(arr2) << endl;

    vector<int> arr3 = {0, -1, 1};
    cout << minAbsoluteValue(arr3) << endl;

    vector<int> arr4 = {7, -7, 4};
    cout << minAbsoluteValue(arr4) << endl;

    vector<int> arr5 = {5, -2, 2, -1};
    cout << minAbsoluteValue(arr5) << endl;

    return 0;
}
