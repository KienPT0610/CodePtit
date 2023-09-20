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
        int a[n + 1] = {};
        for(int i = 1; i <= n; i++) cin >> a[i];
        int d[n + 1] = {};
        int res = 0;
        for(int i = 1; i <= n; i++) {
           d[i] = 1;
           for(int j = 1; j < i; j++) {
                if(a[i] > a[j]) {
                    d[i] = max(d[i], d[j] + 1);
                }
           }
           res = max(d[i], res);
        }
        cout << res << endl;
    }
    return 0;
}