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
        int a[n] = {};
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int x, k; cin >> k >> x;
        ll vt2 = upper_bound(a, a + n, x) - a;
        ll vt1 = lower_bound(a, a + n, x) - a;
        for(int i = k / 2; i > 0; i--) {
            cout << a[vt1 - i] << " ";
        }
        for(int i = 0; i < k / 2; i++) {
            cout << a[vt2 + i] << " ";
        }
        cout << endl;
    }
    return 0;
}