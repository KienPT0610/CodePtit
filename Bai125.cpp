#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

// input:
// 1 0 1 1 1
// 1 1 1 1 0
// 1 1 1 1 1
// 1 1 0 0 0 
// output: 9

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n, m; cin >> n >> m;
        int a[n + 1][m + 1] = {};
        int dp[n + 1][m + 1] = {};
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m ; j++) {
                cin >> a[i][j];
                if(a[i][j]) dp[i][j] = a[i][j] + dp[i - 1][j];
            }   
        }
        int s = 0;
        for(int i = 1; i <= n; i++) {
            int d[m + 1] = {};
            for(int j = 1; j <= m; j++) {
                d[j] = dp[i][j];   
            }
            sort(d + 1, d + m + 1);
            for(int j = 1; j <= m; j++) {
                s = max(s, d[j] * (m + 1 - j));
            }
        }
        cout << s << endl;
    }
    return 0;
}