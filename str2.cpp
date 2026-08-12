#include <bits/stdc++.h>
using namespace std;

bool is_non_decreasing(const string &p) {
    for (int i = 1; i < (int)p.size(); ++i)
        if (p[i-1] > p[i]) return false;
    return true;
}

bool is_palindrome(const string &t) {
    int i = 0, j = (int)t.size() - 1;
    while (i < j) {
        if (t[i] != t[j]) return false;
        ++i; --j;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        int total = 1 << n;
        bool found = false;

        for (int mask = 0; mask < total; ++mask) {
            string p = "", x = "";
            vector<int> idxs;
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    p.push_back(s[i]);
                    idxs.push_back(i+1); // store 1-indexed
                } else {
                    x.push_back(s[i]);
                }
            }
            if (!is_non_decreasing(p)) continue;
            if (!is_palindrome(x)) continue;

            // valid
            cout << idxs.size() << "\n";
            if (!idxs.empty()) {
                for (int k = 0; k < (int)idxs.size(); ++k) {
                    if (k) cout << " ";
                    cout << idxs[k];
                }
                cout << "\n";
            }
            found = true;
            break;
        }

        if (!found) cout << -1 << "\n";
    }
    return 0;
}
