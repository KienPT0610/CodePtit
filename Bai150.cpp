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
        int a[n + 1] = {};
        int b[n + 1] = {};
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = a[i];
        } 
        sort(b + 1, b + n + 1);
        int l = 0, r = 0;
        for(int i = 1; i <= n; i++) {
            if(a[i] != b[i]) {
                l = i;
                break;
            } 
        }
        for(int i = n; i >= 0; i--) {
            if(a[i] != b[i]) {
                r = i;
                break;
            } 
        }
        cout << l << " " << r << endl;
    }
    return 0;
}