#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        ll s = 0;
        for(int i = 1; i <= n; i++) {
            s += i % k;
        }
        cout << (s == k) << endl;
    }
    return 0;
}