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
        int n, x; cin >> n >> x;
        map <int, int> mp;
        int a[n] = {};
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]] = 1;
        }
        int lc = -1;
        for(int i = 0; i < n; i++) {
            if(mp[x + a[i]] == 1) {
                lc = 1;
                break;
            }
        }
        cout << lc << endl;
    }
    return 0;
}