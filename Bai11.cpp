#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

bool Check(string s) {
    for(int i = 1; i < s.length(); i++) {
        if(abs(s[i] - s[i - 1]) != 1) {
            return false;
        }
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