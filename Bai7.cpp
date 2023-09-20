#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

bool Check(string s) {
    int l = 0;
    int r = s.length() - 1;
    while(l <= r) {
        if(s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s; cin >> s;
        if(Check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}