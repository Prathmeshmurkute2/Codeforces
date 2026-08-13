#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[26] = {0};
    int distinct = 0;

    for (char c : s) {
        if (freq[c - 'a'] == 0) {
            distinct++;
            freq[c - 'a']++;
        }
    }

    if (distinct % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}