#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--)	{
        int n, m; cin >> n >> m;
        ll a[n] = {};
        ll b[m] = {};
        for(auto &x : a) cin >> x;
        for(auto &y : b) cin >> y;
        sort(a, a + n);
        sort(b, b + m);
        cout << a[n - 1] * b[0] << endl; 

    }
    return 0;
}