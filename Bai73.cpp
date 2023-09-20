#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--)	{
        int n, x; cin >> n >> x;
        int a[n] = {};
        int vt = -1;
        int lc = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == x && lc == 0) {
                vt = i + 1;
                lc = 1;
            } 
        }
        cout << vt << endl;
    }
    return 0;
}