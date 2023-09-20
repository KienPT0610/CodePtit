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
        for(int i = 0; i < s.length(); i++) {
            int lc = 0;
            for(int j = i + 1; j < s.length(); j++) {
                if(s[i] == s[j]) {
                    lc = 1;
                    s[j] = '0';
                }
            }
            if(!lc && s[i] != '0') cout << s[i];
        }
        cout << endl;
    }
    return 0;
}