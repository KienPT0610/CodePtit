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
        int m = 0, vt = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(m < a[i]) {
                m = a[i];
                vt = i;
            }
        }
        int cnt = 0;
        while(a[vt] != 0) {
            // tru het so le
            for(int i = 0; i < n; i++) {
                if(a[i] % 2 != 0) {
                    a[i] -= 1;
                    cnt ++;
                }
                a[i] /= 2;
            }            
            if(a[vt] != 0) {
                cnt ++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}