#include <bits/stdc++.h>

using namespace std;

int main() {
    string seq;
    cin >> seq;

    char last_ch = '\0';
    int len = -1;
    int max_len = INT_MIN;
    for (char ch : seq) {
        if (ch != last_ch || ch == '\0') {
            last_ch = ch;
            len = 1;
        } else {
            len++;
        }
        max_len = max(len, max_len);
    }
    cout << max_len << '\n';

    return 0;
}