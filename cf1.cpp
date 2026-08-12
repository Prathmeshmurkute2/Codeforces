#include <iostream>
#include <algorithm>
using namespace std;

void func() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxi = *max_element(arr, arr + n);

        cout << maxi << endl;
    }
}

int main() {
    func();
    return 0;
}
