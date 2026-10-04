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