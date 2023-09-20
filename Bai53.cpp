#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

bool Check(string s) {
    int l = 0, r = s.length() - 1;
    while(l <= r) {
        if(s[l] != s[r] || (s[l] - '0') % 2 != 0 || (s[r] - '0') % 2 != 0) return false;
        l++; r--;
    }
    return true;
}

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        if(Check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}