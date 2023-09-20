#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        string s; cin >> s;
        int lc = 0;
        int m = 47;
        int vt = 0;
        for(int i = s.length() - 2; i >= 0; i--) {
            for(int j = i + 1; j < s.length(); j++) {
                if(s[i] > s[j]) {
                    if(s[j] > m) {
                        m = s[j];
                        vt = j;
                        lc = 1;
                    }
                } 
            }
            if(lc) {
                swap(s[i], s[vt]);
                break;
            }
        }
        if(!lc) cout << "-1" << endl;
        else {
            if(s[0] == '0') cout << -1 << endl;
            else cout << s << endl;
        }
    }
    return 0;
}