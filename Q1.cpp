#include <iostream>
#include <cmath>

using namespace std;

bool hasEvenDigits(int n) {
    if (n == 0) {
        return false;
    }
    
    int temp = abs(n);
    int count = 0;
    
    while (temp > 0) {
        temp /= 10;
        count++;
    }
    
    return (count % 2 == 0);
}

int main() {
    cout << "Test Case 1 (1234): " << (hasEvenDigits(1234) ? "True" : "False") << endl;
    cout << "Test Case 2 (12345): " << (hasEvenDigits(12345) ? "True" : "False") << endl;
    cout << "Test Case 3 (0): " << (hasEvenDigits(0) ? "True" : "False") << endl;
    cout << "Test Case 4 (-100000): " << (hasEvenDigits(-100000) ? "True" : "False") << endl;
    cout << "Test Case 5 (-7): " << (hasEvenDigits(-7) ? "True" : "False") << endl;

    return 0;
}