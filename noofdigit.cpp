#include <iostream>
using namespace std;

int countDigits(int n) {
    // Base case: single-digit number (0-9 or -9 to -1)
    if (n >= -9 && n <= 9) {
        return 1;
    }
    
    // Recursive case: remove last digit and count
    return 1 + countDigits(n / 10);
}

