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
        int a[n] = {};
        for(auto &x : a) cin >> x;
        int m = 0;
        for(int i = 0; i < k; i++) {
            m = max(m, a[i]);
        }
        cout << m << " ";
        for(int i = k; i < n - k; i++) {
            
        }
    }
    return 0;
}