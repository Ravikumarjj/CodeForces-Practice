#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int minLen = min(s1.length(), s2.length()); // Find the minimum length

    for (int i = 0; i < minLen; i++) {
        if (tolower(s1[i]) != tolower(s2[i])) { // Check lowercase characters
            if (tolower(s1[i]) < tolower(s2[i])) {
                cout << -1 << endl; // s1 comes before s2 lexicographically
                return 0;
            } else {
                cout << 1 << endl; // s2 comes before s1 lexicographically
                return 0;
            }
        }
    }

    // If we reach here, it means the strings are identical up to the minimum length
    if (s1.length() == s2.length()) {
        cout << 0 << endl; // Strings are lexicographically equal
    } else {
        cout << (s1.length() > s2.length() ? 1 : -1); // Longer string comes later
    }

    return 0;
}
