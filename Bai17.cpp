#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll x = 1;
        for(ll i = 2; i <= n; i++) {
            ll ms = __gcd(x, i);
            x = x * i / ms;
        }
        cout << x << endl;
    }
    return 0;
}