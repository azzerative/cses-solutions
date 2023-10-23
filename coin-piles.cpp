#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a;
        cin >> b;

        int u = min(a, b);
        int v = max(a, b);
        if (v > 2 * u) {
            cout << "NO\n";
        } else if (v == 2 * u) {
            cout << "YES\n";
        } else {
            if ((2 * u - v) % 3 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}