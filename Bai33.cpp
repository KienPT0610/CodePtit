#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n] = {};
        for(auto &x : a) cin >> x;
        sort(a, a + n);
        int kq = INT_MAX;
        for(int i = 1; i < n; i++) {
            kq = min(kq, a[i] - a[i - 1]);
        }
        cout << kq << endl;
    }
    return 0;
}