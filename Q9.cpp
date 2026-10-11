#include <iostream>

using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

int nextPrime(int n) {
    int candidate = n < 2 ? 2 : n + 1;
    while (!isPrime(candidate)) candidate++;
    return candidate;
}

int main() {
    cout << nextPrime(14) << "\n";
    cout << nextPrime(0) << "\n";
    cout << nextPrime(1) << "\n";
    cout << nextPrime(2) << "\n";
    cout << nextPrime(17) << "\n";
    return 0;
}