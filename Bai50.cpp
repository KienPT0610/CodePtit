#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        set <char> st;
        string s; cin >> s;
        int k; cin >> k;
        for(int i = 0; i < s.length(); i++) {
            st.insert(s[i]);
        }
        cout << (st.size() + k >= 26) << endl;
    }
    return 0;
}