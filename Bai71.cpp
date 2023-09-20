#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--)	{
        ll n, m; cin >> n >> m;
        multiset <int> st;
        ll r = n + m;
        for(ll i = 0; i < r; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        for(auto x : st) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}