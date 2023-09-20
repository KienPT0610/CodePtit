#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
const ll e = 1e9 + 7;
using namespace std;
// CODE OF KIEN PT //

ll Power(ll x, ll i) {
    if(i == 0) return 1;
    if(i == 1) return x;
    if(i % 2 == 0) return Power(x * x % e, i / 2) % e;
    return x*Power(x*x%e, i / 2) % e;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        ll n, x; cin >> n >> x;
        ll sum = 0;
        for(ll i = 1; i <= n; i++) {
            ll y; cin >> y;
            sum += y * Power(x, n - i) % e;
            sum %= e;
        }
        cout << sum << endl;
    }
    return 0;
}