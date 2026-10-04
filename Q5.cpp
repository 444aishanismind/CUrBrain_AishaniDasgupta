#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> vec) {
    cout << "[";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i < vec.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}

vector<int> replaceEvenDigits(int n) {
    vector<int> digits;
    int temp = n;
    
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) {
            digits.push_back(0);
        } else {
            digits.push_back(digit);
        }
        temp /= 10;
    }
    
    reverse(digits.begin(), digits.end());
    return digits;
}

int main() {
    cout << "Test Case 1 (258): ";
    printVector(replaceEvenDigits(258));

    cout << "Test Case 2 (12345): ";
    printVector(replaceEvenDigits(12345));

    cout << "Test Case 3 (2468): ";
    printVector(replaceEvenDigits(2468));

    cout << "Test Case 4 (13579): ";
    printVector(replaceEvenDigits(13579));

    cout << "Test Case 5 (1002): ";
    printVector(replaceEvenDigits(1002));

    return 0;
}