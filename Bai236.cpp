#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int m, n, k; cin >> m >> n >> k;
        // da duoc xap sep
        ll a[m], b[n], c[k];
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(auto &x : c) cin >> x;

        // xu li
        int x = 0, y = 0, z = 0; 
        int lc = 0;
        while(x < m && y < n && z < k){
            if(a[x] == b[y] && b[y] == c[z]) {
                cout << a[x] << " ";
                lc = 1;
                x++, y++, z++;
            }
            else if(a[x] < b[y]) {
                x++;
            }
            else if(b[y] < c[z]) {
                y++;
            }
            else z++;
        }
        if(lc == 0) cout << "-1" << endl;
    }
    return 0;
}