#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
#define lmt 100005
using namespace std;
// CODE OF KIEN PT //

int a[lmt] = {};

void erathone() {
    a[0] = a[1] = 1;
    for(int i = 2; i <= sqrt(lmt); i++) {
        if(a[i] == 0) {
            for(int j = i*i; j <= lmt; j += i) {
                a[j] = 1;
            }
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    erathone();
    while(t--)	{
        int l, r; cin >> l >> r;
        int cnt = 0;
        for(int i = l; i <= r; i++) {
            if(!a[i]) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}