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
        ll a, x, y;
        cin >> a >> x >> y;
        ll s = __gcd(x, y);
        while(s--) {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}