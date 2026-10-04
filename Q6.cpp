#include <iostream>
#include <cmath>

using namespace std;

int digitFrequencyDifference(int n, int a, int b) {
    int temp = abs(n);
    int countA = 0;
    int countB = 0;
    
    if (temp == 0) {
        if (a == 0) countA++;
        if (b == 0) countB++;
    }
    
    while (temp > 0) {
        int digit = temp % 10;
        if (digit == a) {
            countA++;
        } else if (digit == b) {
            countB++;
        }
        temp /= 10;
    }
    
    return countB - countA;
}

int main() {
    cout << "Test Case 1 (122333, 2, 3): " << digitFrequencyDifference(122333, 2, 3) << endl;
    cout << "Test Case 2 (5555, 5, 1): " << digitFrequencyDifference(5555, 5, 1) << endl;
    cout << "Test Case 3 (12345, 1, 5): " << digitFrequencyDifference(12345, 1, 5) << endl;
    cout << "Test Case 4 (0, 0, 1): " << digitFrequencyDifference(0, 0, 1) << endl;
    cout << "Test Case 5 (112233, 1, 2): " << digitFrequencyDifference(112233, 1, 2) << endl;

    return 0;
}