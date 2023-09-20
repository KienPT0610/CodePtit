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
        ll x, y, z, n;
        cin >> x >> y >> z >> n;
        ll c = x*y/__gcd(x, y);
        ll d = c*z/__gcd(c, z);
        ll l = pow(10, n - 1);
        ll r = pow(10, n) - 1;
        ll s = ceil(1.0 * l/d);
        if(d*s <= r) {
            cout << d*s << endl;
        } else cout << "-1" << endl;
    }
    return 0;
}