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

    int maxIndex = 0;
    int minIndex = 0;

    // Find first occurrence of maximum
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // Find last occurrence of minimum
    for (int i = 0; i < n; i++) {
        if (arr[i] <= arr[minIndex]) {
            minIndex = i;
        }
    }

    int time = maxIndex;

    // Maximum moves to the front and crosses minimum
    if (maxIndex > minIndex) {
        minIndex++;
    }

    time += (n - 1 - minIndex);

    cout << time;

    return 0;
}