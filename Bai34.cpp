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
        for(int &x : a) cin >> x;
        int m = INT_MAX;
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(m > abs(a[i] - a[j])) {
                    m = abs(a[i] - a[j]);
                }
            }
        }
        cout << m << endl;
    }
    return 0;
}   