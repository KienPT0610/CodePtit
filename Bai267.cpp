#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
const ll e = 10007;
using namespace std;
// CODE OF KIEN PT //

ll bcnn(ll a, ll b) {
    return a*b/ __gcd(a, b);
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n; cin >> n;
        int a[n] = {};
        ll sum = 0;
        for(auto &x : a) {
            cin >> x;
            sum += x;
        }
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                sum += bcnn(a[j], a[i]);
            }
        }
        cout << sum << endl;
    }
    return 0;
}