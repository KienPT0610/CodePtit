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
        for(auto &x : a) cin >> x;
        set <int> st;
        for(int i = 0; i < n; i++) {
            while(a[i] != 0) {
                int k = a[i] % 10;
                st.insert(k);
                a[i] /= 10;
            }
        }
        for(auto x : st) cout << x << " ";
        cout << endl;
        
    }
    return 0;
}