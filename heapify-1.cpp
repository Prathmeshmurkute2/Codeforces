#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        vector<bool> vis(n + 1, false);

        for (int i = 1; i <= n; i++) {
            if (vis[i]) continue;

            vector<int> indices;

            // build component (i → 2*i → 4*i ...)
            for (int j = i; j <= n; j *= 2) {
                vis[j] = true;
                indices.push_back(j);
            }

            // collect values
            vector<int> values;
            for (int idx : indices) {
                values.push_back(a[idx]);
            }

            // sort both
            sort(indices.begin(), indices.end());
            sort(values.begin(), values.end());

            // place back sorted values
            for (int k = 0; k < indices.size(); k++) {
                a[indices[k]] = values[k];
            }
        }

        // check if sorted
        bool sorted = true;
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i + 1]) {
                sorted = false;
                break;
            }
        }

        cout << (sorted ? "YES\n" : "NO\n");
    }

    return 0;
}