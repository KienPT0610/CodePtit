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
        ll a[n + 4] = {};
        for(int i = 3; i < n + 3; i++) {
            cin >> a[i];
        }
        ll d[n] = {};
        ll m = 0;
        for(int i = 3; i < n + 3; i++) {
            d[i] = max(d[i - 2], d[i - 3]);
            d[i] += a[i];
            m = max(d[i], m);
        } 
        cout << m << endl;
    }
    return 0;
}