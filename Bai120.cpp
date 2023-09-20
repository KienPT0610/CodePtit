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
        int n, m; cin >> n >> m;
        int a[n][m] = {};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int h1 = 0, h2 = n - 1;
        int c1 = 0, c2 = m - 1;
        while(c1 < c2 || h1 < h2) {
            int tmp = a[h1][c1];
            for(int i = c1 + 1; i <= c2; i++) {
                int res =  a[h1][i];
                a[h1][i] = tmp;
                tmp = res;
            }
            for(int i = h1 + 1; i <= h2; i++) {
                int res =  a[i][c2];
                a[i][c2] = tmp;
                tmp = res;
            }
            for(int i = c2 - 1; i >= c1; i--) {
                int res =  a[h2][i];
                a[h2][i] = tmp;
                tmp = res;
            }
            for(int i = h2 - 1; i >= h1; i--) {
                int res =  a[i][c1];
                a[i][c1] = tmp;
                tmp = res;
            }
            c1++; h1++; c2--; h2--;
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}