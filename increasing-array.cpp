#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    ll moves = 0;
    for (int& x : nums) {
        cin >> x;
    }
    for (int i = 1; i < n; i++) {
        int diff = nums[i - 1] - nums[i];
        if (diff > 0) {
            nums[i] += diff;
            moves += diff;
        }
    }
    cout << moves << '\n';
}