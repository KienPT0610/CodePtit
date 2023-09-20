#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--)	{
        ll n; cin >> n;
        ll a[n] = {};
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            if(x > 0) {
                a[cnt++] = x;
            }
        }
        for(auto x : a) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}