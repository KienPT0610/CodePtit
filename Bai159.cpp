#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

// tim phan tu cuoi cung nho hon x = k - a[i];

// int last_pos(int a[], int l, int r, int x) {
//     int res = 0;

// }

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n, k; cin >> n >> k;
        int a[n] = {};
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        ll cnt = 0;
        for(int i = 0; i < n - 1; i++) {
            ll vt = lower_bound(a, a + n, a[i] + k) - a;
            cnt += vt - i - 1;
        }
        cout << cnt << endl;
    }
    return 0;
}