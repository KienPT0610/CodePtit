#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

ll Firt(string s, ll m){
    ll res = 0;
    for(int i = 0; i < s.length(); i++) {
        res = res*10 + s[i] - '0';
        res %= m;
    }
    return res;
}

ll Power(ll a, ll b, ll x) {
    if(b == 0) return 1;
    if(b == 1) return a % x;
    if(b % 2 == 0) {
        return Power(a * a % x, b / 2, x) % x;
    } else {
        return a * Power(a * a % x, b / 2, x) % x;
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        string s; cin >> s;
        ll b, m; cin >> b >> m;
        ll du = Firt(s, m);
        cout << Power(du, b, m) << endl;
    }
    return 0;
}