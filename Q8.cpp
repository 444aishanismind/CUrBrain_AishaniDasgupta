#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int kthFactor(int n, int k) {
    vector<int> factors;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i * i != n) factors.push_back(n / i);
        }
    }
    sort(factors.begin(), factors.end());
    if (k > 0 && k <= factors.size()) return factors[k - 1];
    return -1;
}

int main() {
    cout << kthFactor(12, 3) << "\n";
    cout << kthFactor(1, 1) << "\n";
    cout << kthFactor(12, 6) << "\n";
    cout << kthFactor(12, 7) << "\n";
    cout << kthFactor(36, 5) << "\n";
    return 0;
}