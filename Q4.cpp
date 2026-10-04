#include <iostream>

using namespace std;

int subtractProductAndSum(int n) {
    int product = 1;
    int sum = 0;
    int temp = n;
    
    while (temp > 0) {
        int digit = temp % 10;
        product *= digit;
        sum += digit;
        temp /= 10;
    }
    
    return product - sum;
}

int main() {
    cout << "Test Case 1 (234): " << subtractProductAndSum(234) << endl;
    cout << "Test Case 2 (123): " << subtractProductAndSum(123) << endl;
    cout << "Test Case 3 (5): " << subtractProductAndSum(5) << endl;
    cout << "Test Case 4 (100): " << subtractProductAndSum(100) << endl;
    cout << "Test Case 5 (999): " << subtractProductAndSum(999) << endl;

    return 0;
}