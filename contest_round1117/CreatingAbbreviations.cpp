#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <cctype>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    unordered_set<char> available_chars;

    // Insert the first letter of each initial word (in uppercase)
    for (int i = 0; i < n; i++) {
        string w;
        cin >> w;
        available_chars.insert(toupper(w[0]));
    }

    vector<string> abbreviations(m);
    for (int i = 0; i < m; i++) {
        cin >> abbreviations[i];
    }

    vector<bool> formed(m, false);
    int formed_count = 0;
    bool progress = true;

    // Keep unlocking abbreviations as long as we make progress
    while (progress) {
        progress = false;

        for (int i = 0; i < m; i++) {
            if (formed[i]) continue;

            bool can_form = true;
            for (char c : abbreviations[i]) {
                if (available_chars.find(c) == available_chars.end()) {
                    can_form = false;
                    break;
                }
            }

            if (can_form) {
                formed[i] = true;
                available_chars.insert(abbreviations[i][0]);
                formed_count++;
                progress = true; // Unlocked at least one new abbreviation
            }
        }
    }

    if (formed_count == m) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}