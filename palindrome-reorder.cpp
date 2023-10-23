#include <bits/stdc++.h>

using namespace std;

void print_evens(unordered_map<char, int>& chars, string& s) {
    for (char ch : s) {
        int count = chars[ch] / 2;
        while (count--) {
            cout << ch;
        }
    }
}

int main() {
    string s;
    getline(cin, s);

    if (s.length() == 1) {
        cout << s << '\n';
        return 0;
    }

    unordered_map<char, int> chars;
    for (char ch : s) {
        chars[ch] = chars[ch] + 1;
    }

    string evens = "";
    string ones = "";
    for (pair<char, int> p : chars) {
        char ch = p.first;
        int count = p.second;
        if (count % 2 != 0) {
            if (ones.length() == 0 || ones.back() == ch) {
                for (int i = 0; i < count; i++)
                    ones += ch;
            } else {
                cout << "NO SOLUTION\n";
                return 0;
            }
        } else {
            evens += ch;
        }
    }

    if (evens.length() == 0) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    print_evens(chars, evens);
    cout << ones;
    reverse(evens.begin(), evens.end());
    print_evens(chars, evens);
    cout << '\n';

    return 0;
}