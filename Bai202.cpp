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
        int n; cin >> n;
        ll a[n] = {};
        ll d[n] = {};
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll m = a[0];
        d[0] = a[0];  
        for(int i = 1; i < n; i++) {
            d[i] = max(a[i], a[i] + d[i - 1]);
            m = max(d[i], m);
        }
        cout << m << endl;
    }
    return 0;
}