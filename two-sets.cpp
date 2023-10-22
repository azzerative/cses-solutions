#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void print_set(unordered_set<int>& s) {
    for (int x : s) {
        cout << x << ' ';
    }
    cout << '\n';
}

int main() {
    int n;
    cin >> n;

    unordered_set<int> s1;
    unordered_set<int> s2;
    ll sum1 = 0;
    ll sum2 = 0;

    for (int x = n; x >= 1; x--) {
        if (sum1 > sum2) {
            s2.insert(x);
            sum2 += x;
        } else {
            s1.insert(x);
            sum1 += x;
        }
    }

    if (sum1 == sum2) {
        cout << "YES\n";
        cout << s1.size() << '\n';
        print_set(s1);
        cout << s2.size() << '\n';
        print_set(s2);
    } else {
        cout << "NO\n";
    }

    return 0;
}