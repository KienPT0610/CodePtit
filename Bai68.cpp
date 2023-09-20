#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--)	{
        int n; cin >> n;
        ll a[n] = {};
        set <ll> st;
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            if(x >= 0) {
                st.insert(x);
            }
        }
        for(int i = 0; i < n; i++) {
            if(st.find(i) != st.end()) {
                cout << i << " ";
            } else {
                cout << "-1" << " ";
            }
        }
        cout << endl;
    }
    return 0;
}