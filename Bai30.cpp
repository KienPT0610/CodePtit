#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--) {
        int a, m; cin >> a >> m;
        int lc = 0;
        for(int i = 0; i < m; i++) {
            if(a * i % m == 1) {
                lc = 1;
                cout << i << endl;
                break;
            }
        }
        if(!lc) cout << "-1" << endl;
    }
    return 0;
}