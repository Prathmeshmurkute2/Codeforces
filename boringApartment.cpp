#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int d = x % 10;
        int k = 0;

        while (x > 0) {
            k++;
            x /= 10;
        }

        int ans = (d - 1) * 10 + k * (k + 1) / 2;

        cout << ans << '\n';
    }

    return 0;
}