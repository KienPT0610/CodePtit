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
        for(auto &x : a) cin >> x;
        int m = a[0];
        for(int i = 1; i < n; i++) {
            int res = a[i];
            int tmp = a[i];
            for(int j = i - 1; j >= 0; j--) {
                res *= a[j];
                tmp = max(tmp, res);
            }
            m = max(m, tmp);
        }
        cout << m << endl;
    }
    return 0;
}