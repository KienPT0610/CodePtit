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
        int a[n + 5] = {};
        int b[n + 5] = {};
        int c[n + 5] = {};
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = a[i - 1] + b[i - 1];
        }
        for(int i = n; i >= 1; i--) {
            c[i] = a[i + 1] + c[i + 1];
        }
        int lc = 0;
        for(int i = 1; i <= n; i++) {
            if(c[i] == b[i]) {
                lc = 1;
                cout << i << endl;
                break;
            }
        }
        if(!lc) cout << "-1" << endl;
    }
    return 0;
}