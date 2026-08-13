#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;

    string s = to_string(n);

    int lucky = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '4' || s[i] == '7') {
            lucky++;
        }
    }

    if (lucky == 4 || lucky == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}