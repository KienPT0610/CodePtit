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
        int l = 0, r = n - 1;
        int i = 0;
        while(i < n) {
            if(i % 2 == 0) {
                cout << a[r] << " ";
                r--;
            } else {
                cout << a[l] << " ";
                l++;
            }
            i++;
        }
        cout << endl;
    }
    return 0;
}