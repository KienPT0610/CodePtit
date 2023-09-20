#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

int nto(ll x) {
    if(x < 2) return 0;
    if(x < 4) return 1;
    if(x % 2 == 0 || x % 3 == 0) return 0;
    for(int i = 5; i <= sqrt(x); i += 6) {
        if(x % i == 0 || x % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int tang(ll n) {
    //12345 6
    int x = n % 10;
    n /= 10;
    while(n != 0) {
        int k = n % 10;
        if(k >= x) {
            return 0;
        }
        x = n % 10;
        n /= 10;
    }
    return 1;
}

int giam(ll n) {
    //65432 1
    int x = n % 10;
    n /= 10;
    while(n != 0) {
        int k = n % 10;
        if(k <= x) {
            return 0;
        }
        x = n % 10;
        n /= 10;
    }
    return 1;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        ll n; cin >> n;
        ll l = pow(10, n - 1);
        ll r = pow(10, n) - 1;
        ll cnt = 0;
        for(ll i = l; i <= r; i++) {
            if(tang(i) || giam(i)) {
                if(nto(i)) {
                    cnt ++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}