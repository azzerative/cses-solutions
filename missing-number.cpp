#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n - 1);
    ll sum = 0;
    for (int& x : nums) {
        cin >> x;
        sum += x;
    }

    ll target_sum = (ll)n * (n + 1) / 2;
    cout << target_sum - sum << '\n';

    return 0;
}