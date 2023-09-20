#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        map <int, int> mp;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x] ++;
        }
        int cnt = 0;
        for(auto x : mp) {
            if(x.second > 1) {
                cnt += x.second;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}   