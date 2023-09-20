#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

int a[100001] = {};

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, b, k;
    cin >> n >> k >> b;
    for(int i = 0; i < b; i++) {
        int x; cin >> x;
        a[x] = 1;
    }
    int s = 0;
    for(int i = 1; i <= k; i++) {
        s += a[i];
    }
    int ans = s;
    for(int i = k + 1; i <= n; i++) {
        s = s - a[i - k] + a[i];
        ans = min(ans, s);
    }
    cout << ans << endl;
    return 0;
}