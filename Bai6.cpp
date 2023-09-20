#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

bool Check(string s) {
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '0' && s[i] != '6' && s[i] != '8') {
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