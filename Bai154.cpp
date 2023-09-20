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
        int n, k; cin >> n >> k;
        vector <int> vt;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if(x <= k) {
                cnt++;
                vt.push_back(1);
            } else {
                vt.push_back(0);
            }
        }
        int m = 0;
        for(int i = 0; i < cnt; i++) {
            m += vt[i];
        }
        int M = m;
        for(int i = cnt; i < n; i++) {
            m = m - vt[i - cnt] + vt[i];
            M = max(M, m);
        }
        
        cout << cnt - M << endl;
    }
    return 0;
}