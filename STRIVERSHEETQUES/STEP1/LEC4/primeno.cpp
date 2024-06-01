#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read the integer input
    int n;
    cin >> n;

    // Initialize counter for divisors
    int cnt = 0;

    // Check for divisors up to the square root of n
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If i is a divisor, increment the counter
            cnt++;
            // If n / i is a different divisor, increment the counter
            if ((n / i) != i) {
                cnt++;
            }
        }
    }

    // Check if the number of divisors is exactly 2 (1 and n)
    if (cnt == 2) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
