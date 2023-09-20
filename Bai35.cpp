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
        int res = 0;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if(x > 0) {
                a[res++] = x;
            }
        }
        sort(a, a + res);
        if(a[0] != 1) {
            cout << "1" << endl;
            continue;
        }
        int lc = 0;
        for(int i = 1; i < res; i++) {
            if(a[i - 1] + 1 < a[i]) {
                lc = 1;
                cout << a[i - 1] + 1 << endl;
                break;
            }
        }
        if(!lc) cout << a[res - 1] + 1 << endl;
    }
    return 0;
}