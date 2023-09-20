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
        set <int> st;
        int lc = 0;
        if(s[0] == '0') {
            cout << "INVALID" << endl;
            continue;
        }
        for(int i = 0; i < s.length(); i++) {
            if(!isdigit(s[i])) {
                cout << "INVALID" << endl;
                lc = 2;
                break;
            }
            else {
                lc = 1;
                st.insert(s[i] - '0');
            }
        }
        if(lc == 1) {
            if(st.size() == 10) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}