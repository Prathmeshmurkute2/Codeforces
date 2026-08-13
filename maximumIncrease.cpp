#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 1;
    int maxi = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            cnt++;
        } else {
            cnt = 1;
        }

        maxi = max(maxi, cnt);
    }

    cout << maxi;

    return 0;
}