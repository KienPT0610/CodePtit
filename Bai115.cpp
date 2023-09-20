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
        int kq = -1;
        for(int i = 0; i < n - 1; i++) {
            for(int j  = i + 1; j < n; j++) {
                if(a[j] > a[i]) {
                    kq = max(kq, a[j] - a[i]);
                }
            }
        }
        cout << kq << endl;
    }
    return 0;
}