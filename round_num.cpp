#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int num) {

    vector<int> ans;

    int digit = 1;

    while (num > 0) {

        int d = num % 10;
        d = d * digit;

        if (d != 0)
            ans.push_back(d);

        num /= 10;
        digit *= 10;
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;

    for (int x : ans)
        cout << x << " ";

    cout << endl;
}

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        solve(n);
    }
}