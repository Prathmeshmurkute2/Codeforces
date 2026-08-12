#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        int digit = s[i] - '0';

        // Don't change the first digit if it is 9
        if (i == 0 && digit == 9)
            continue;

        if (digit >= 5)
            s[i] = (9 - digit) + '0';
    }

    cout << s;
    return 0;
}