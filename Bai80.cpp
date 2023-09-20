#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--)	{
        int n, k; cin >> n >> k;
        map <int, int> mp;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x] ++;
        }
        if(mp[k] == 0) {
            cout << "-1" << endl;
        } else {
            cout << mp[k] << endl;
        }
    }
    return 0;
}