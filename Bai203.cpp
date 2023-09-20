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
        int n, k; cin >> n >> k;
        int a[n] = {};
        for(auto &x : a) cin >> x;
        int m = 0;
        for(int i = 0; i < k; i++) m += a[i];
        int l = 0, r = k - 1, maxx = m;
        for(int i = k; i < n; i++) {
            m = m - a[i - k] + a[i];
            if(maxx < m) {
                maxx = m;
                l = i - k + 1;
                r = i;
            }
        } 
        for(int i = l; i <= r; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}