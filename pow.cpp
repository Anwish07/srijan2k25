
#include <iostream>
using namespace std;
//x is base and n is exponent
double power(double x, int n) {
    // Base case
    if (n == 0) return 1;
    
    // Handle negative exponents
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    
    // Recursive case using divide and conquer
    double half = power(x, n / 2);
    
    if (n % 2 == 0) {
        return half * half;  // Even exponent
    } else {
        return x * half * half;  // Odd exponent
    }
}



