#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

int Check(int a[], int n, int x) {
    int l = 0, r = n - 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(x > a[m]) {
            l = m + 1;
        }
        if(x < a[m]) {
            r = m - 1;
        }
        if(x == a[m]) {
            return 1;
        }
    }
    return -1;
}

int main() {
    int t; cin >> t;
    while(t--)	{
        int n, x; cin >> n >> x;
        int a[n] = {};
        for(int &it : a) cin >> it;
        sort(a, a + n);
        cout << Check(a, n, x) << endl;
    }
    return 0;
}