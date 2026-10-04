#include <iostream>

using namespace std;

int reverseAndDouble(int n) {
    int temp = n;
    int rev = 0;
    
    while (temp != 0) {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }
    
    return rev * 2;
}

int main() {
    cout << "Test Case 1 (123): " << reverseAndDouble(123) << endl;        
    cout << "Test Case 2 (-45): " << reverseAndDouble(-45) << endl;      
    cout << "Test Case 3 (0): " << reverseAndDouble(0) << endl;           
    cout << "Test Case 4 (1200): " << reverseAndDouble(1200) << endl;     
    cout << "Test Case 5 (9): " << reverseAndDouble(9) << endl;           

    return 0;
}