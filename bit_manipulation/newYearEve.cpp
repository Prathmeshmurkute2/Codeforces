#include <iostream>
using namespace std;

long long solve(long long n, long long k) {

    // If we can take only one candy,
    // the maximum XOR is simply n.
    if (k == 1) {
        return n;
    }

    // Find highest power of 2 <= n
    long long p = 1;

    while (p <= n / 2) {
        p *= 2;
    }

    // Maximum is a number containing all 1s
    return 2 * p - 1;
}

int main() {
    long long n, k;

    cin >> n >> k;

    cout << solve(n, k) << '\n';

    return 0;
}