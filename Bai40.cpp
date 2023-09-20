#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n + 1] = {};
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            a[i] += a[i - 1];
        }
        while(k--) {
            int l, r; cin >> l >> r;
            cout << a[r] - a[l - 1] << endl;
        }
    }
    return 0;
}