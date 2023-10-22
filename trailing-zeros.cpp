#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    for (int factor = 5; n / factor >= 1; factor *= 5) {
        count += n / factor;
    }

    cout << count << '\n';

    return 0;
}