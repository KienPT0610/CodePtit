#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

void solve() {
    string s; cin >> s;
    ll m; cin >> m;
    res = 0;
    for(int i = 0; i < s.length(); i++) {
        res = res*10 + (s[i] - '0');
        res %= m;
    }
    cout << res << endl;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        solve();
    }
    return 0;
}