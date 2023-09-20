#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
const ll e = 1e9 + 7;
using namespace std;

// CODE OF KIEN PT //

ll Power(ll x, ll y, ll p) {
    if(y == 0) return 1;
    if(y % 2 == 0) {
        return Power(x * x % p, y / 2, p) % p;
    } else {
        return x * Power (x * x % p, y / 2, p) % p;
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        ll x, y, p;
        cin >> x >> y >> p;
        cout << Power(x, y, p)<< endl;
    }
    return 0;
}