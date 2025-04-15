#include<bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n) {
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}
int main(){
vector<bool> primes = sieve(50);
cout << "Primes up to 50: ";
for(int i = 2; i <= 50; i++) {
    if (primes[i]) cout << i << " ";
}
}
// Output: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47