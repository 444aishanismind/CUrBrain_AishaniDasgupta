#include <iostream>
#include <vector>

using namespace std;

long long sumModulo(vector<long long>& arr) {
    long long MOD = 1000000007LL;
    long long result = 0;
    for (long long value : arr) {
        result = (result + value % MOD) % MOD;
    }
    return result;
}

int main() {
    vector<long long> tc1 = {1000000000, 1000000000, 1000000000};
    vector<long long> tc2 = {1, 2, 3, 4};
    vector<long long> tc3 = {};
    vector<long long> tc4 = {1000000007};
    vector<long long> tc5 = {0, 0, 0};

    cout << "Test Case 1 Output: " << sumModulo(tc1) << endl;
    cout << "Test Case 2 Output: " << sumModulo(tc2) << endl;
    cout << "Test Case 3 Output: " << sumModulo(tc3) << endl;
    cout << "Test Case 4 Output: " << sumModulo(tc4) << endl;
    cout << "Test Case 5 Output: " << sumModulo(tc5) << endl;

    return 0;
}