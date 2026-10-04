#include <iostream>

using namespace std;

int palindromeOrSum(int n) {
    if (n < 0) {
        int temp = n;
        int rev = 0;
        while (temp != 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        return n + rev;
    }
    
    int temp = n;
    int rev = 0;
    while (temp != 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    
    if (n == rev) {
        return n;
    } else {
        return n + rev;
    }
}

int main() {
    cout << "Test Case 1 (121): " << palindromeOrSum(121) << endl;
    cout << "Test Case 2 (123): " << palindromeOrSum(123) << endl;
    cout << "Test Case 3 (0): " << palindromeOrSum(0) << endl;
    cout << "Test Case 4 (-45): " << palindromeOrSum(-45) << endl;
    cout << "Test Case 5 (120): " << palindromeOrSum(120) << endl;

    return 0;
}