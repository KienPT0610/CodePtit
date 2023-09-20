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
        int a[n] = {};
        for(auto &x : a) cin >> x;
        sort(a, a + n);
        int in[n] = {};
        int cnt = 0;
        for(int i = 0; i < n; i += 2) {
            in[i] = a[cnt++];
        }
        for(int i = 1; i < n; i += 2) {
            in[i] = a[cnt++];
        }
        for(auto x : in) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}