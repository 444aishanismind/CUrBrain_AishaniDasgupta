#include <iostream>
#include <vector>

using namespace std;

int computeGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findArrayGCD(const vector<int>& arr) {
    int result = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        result = computeGCD(result, arr[i]);
    }
    return result;
}

int main() {
    cout << findArrayGCD({24, 36, 48}) << "\n";
    cout << findArrayGCD({33, 44, 55, 66}) << "\n";
    cout << findArrayGCD({17}) << "\n";
    cout << findArrayGCD({12, 18, 24, 30}) << "\n";
    cout << findArrayGCD({1, 7, 14, 28}) << "\n";
    return 0;
}
