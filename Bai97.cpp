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
        ll x, n; cin >> x >> n;
        int a[10] = {};
        while(n != 0) {
            a[n % 10] ++;
            n /= 10;
        }

        a[7] += a[8] + a[9];
        a[5] += a[6];
        a[3] += a[4] + a[6] + 2*a[9];
        a[2] += 2*a[4] + 3*a[8] + a[9];
        a[4] = 0;
        a[6] = 0;
        for(int i = 7; i >= 2; i--) {
            int j = a[i];
            while(j--) {
                cout << i;
            }
        }
        cout << endl;
    }
    return 0;
}