#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "1\n";
        return 0;
    }

    if (n <= 3) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    for (int x = 2; x <= n; x += 2) {
        cout << x << ' ';
    }
    for (int x = 1; x <= n; x += 2) {
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}