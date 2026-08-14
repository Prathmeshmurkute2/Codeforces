#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int height = 0;
    int used = 0;
    int level = 1;

    while (used + level * (level + 1) / 2 <= n) {
        used += level * (level + 1) / 2;
        height++;
        level++;
    }

    cout << height;

    return 0;
}