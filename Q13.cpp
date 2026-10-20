#include <iostream>
#include <vector>

using namespace std;

bool hasDivisiblePrefix(vector<long long>& arr, long long k) {
    if (k < 0) k = -k;
    long long remainder = 0;
    for (long long value : arr) {
        remainder = (remainder + value) % k;
        if (remainder < 0) remainder += k;
        if (remainder == 0) return true;
    }
    return false;
}

int main() {
    vector<long long> tc1 = {4, 2, 9};
    vector<long long> tc2 = {1, 2, 4};
    vector<long long> tc3 = {5};
    vector<long long> tc4 = {0, 1};
    vector<long long> tc5 = {-2, 2, 1};

    cout << "Test Case 1 Output: " << (hasDivisiblePrefix(tc1, 3) ? "True" : "False") << endl;
    cout << "Test Case 2 Output: " << (hasDivisiblePrefix(tc2, 5) ? "True" : "False") << endl;
    cout << "Test Case 3 Output: " << (hasDivisiblePrefix(tc3, 5) ? "True" : "False") << endl;
    cout << "Test Case 4 Output: " << (hasDivisiblePrefix(tc4, 7) ? "True" : "False") << endl;
    cout << "Test Case 5 Output: " << (hasDivisiblePrefix(tc5, 3) ? "True" : "False") << endl;

    return 0;
}