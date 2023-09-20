#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    int a[n * n] = {};
    for(auto &x : a) cin >> x;
    sort(a, a + n*n);
    int b[n][n] = {};
    int c1 = 0, c2 = n - 1;
    int h1 = 0, h2 = n - 1;
    int res = 0;
    while(h1 <= h2 && c1 <= c2) {
        for(int i = c1; i <= c2; i++) {
            b[h1][i] = a[res++]; 
        }
        ++h1;
        for(int i = h1; i <= h2; i++) {
            b[i][c2] = a[res++]; 
        }
        --c2;
        if(h1 <= h2) {
            for(int i = c2; i >= c1; i--) {
                b[h2][i] = a[res++];
            }
            --h2;
        }
        if(c1 <= c2) {
            for(int i = h2; i >= h1; i--) {
                b[i][c1] = a[res++];
            }
            c1++;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}