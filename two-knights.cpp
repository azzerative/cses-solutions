#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int k = 1; k <= n; k++) {
        cout << (long long)(k * k - 1) * k * k / 2 - 4 * (k - 1) * (k - 2) << '\n';
    }

    return 0;
}