#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s; cin >> s;
        int n = s.length() - 1;
        if(s[n] == '6' && s[n - 1] == '8') {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
    return 0;
}