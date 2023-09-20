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
        int a[n + 1][n + 1] = {};
        int y = INT_MIN;
        int x = INT_MIN;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                cin >> a[i][j];
            }
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                a[i][0] += a[i][j];
                a[0][i] += a[j][i];
            }
            y = max(y, a[i][0]);
            x = max(x, a[0][i]);
        }
        int cnt = 0;
        if(y > x) {
            for(int i = 1; i <= n; i++) {
            cnt += y - a[i][0];
            }
            cout << cnt << endl;
        } else {
            for(int i = 1; i <= n; i++) {
            cnt += x - a[0][i];
            }
            cout << cnt << endl;
        }

    }
    return 0;
}