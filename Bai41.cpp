#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int a[n+1][m+1] = {};
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                cin >> a[i][j];
                if(a[i][j] == 1) {
                    a[0][j] = 1;
                    a[i][0] = 1;
                }
            }
        }

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(a[i][0] == 1 || a[0][j] == 1) cout << "1 ";
                else cout << "0 ";
            }
            cout << endl;
        }
        cout << endl;

    }
    return 0;
}