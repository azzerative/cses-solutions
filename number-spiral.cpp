#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int y, x;
        cin >> y;
        cin >> x;
        y--;
        x--;

        int mx = max(y, x);
        bool is_even = mx % 2 == 0;
        bool is_odd = mx % 2 != 0;
        bool is_row = mx == x;
        bool is_col = mx == y;

        ll middle = (ll)mx * mx + mx + 1;
        ll ans = -1;
        if ((is_even && is_col) || (is_odd && is_row)) {
            ans = middle + y + x - 2 * mx;
        } else if ((is_even && is_row) || (is_odd && is_col)) {
            ans = middle - y - x + 2 * mx;
        }
        cout << ans << '\n';
    }

    return 0;
}