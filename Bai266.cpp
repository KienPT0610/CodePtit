#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
const ll e = 1e9 + 7;
using namespace std;
// CODE OF KIEN PT //

ll POWER(int a, int b) {
    if(b == 0) return 1;
    if(b % 2 == 0) {
        return POWER(a * a % e, b/2) % e;
    } else {
        return a * POWER(a * a % e, b/2) % e;
    }
}

bool check(int x, int y) {
    if(POWER(x, y) > POWER(y, x)) return true;
    return false;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;

        int x[n] = {};
        int y[m] = {};

        for(auto &i : x) cin >> i;
        for(auto &i : y) cin >> i;

        int cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(check(x[i], y[j])) {
                    cnt ++;
                }
            }
        }
        cout << cnt << endl;

    }
    return 0;
}