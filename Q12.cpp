#include <iostream>

using namespace std;

long long powerModulo(long long base, long long power, long long mod) {
    long long result = 1 % mod;
    base %= mod;
    for (long long i = 0; i < power; ++i) {
        result = (result * base) % mod;
    }
    return result;
}

int main() {
    cout << "Test Case 1 Output: " << powerModulo(2, 10, 1000) << endl;
    cout << "Test Case 2 Output: " << powerModulo(7, 0, 13) << endl;
    cout << "Test Case 3 Output: " << powerModulo(9, 1, 7) << endl;
    cout << "Test Case 4 Output: " << powerModulo(3, 4, 1) << endl;
    cout << "Test Case 5 Output: " << powerModulo(0, 5, 11) << endl;

    return 0;
}