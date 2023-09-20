#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

ll fb[94] = {};

void fibo() {
    fb[1] = 1;
    fb[0] = 0;
    for(int i = 2; i < 94; i++) {
        fb[i] = fb[i - 1] + fb[i - 2];
    }
}

bool check(ll x) {
    for(int i = 0; i < 94; i++) {
        if(fb[i] == x) {
            return true;
        }
    }
    return false;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    fibo();
    while(t--)	{
        int n; cin >> n;
        ll a[n] = {};
        for(auto &x : a) cin >> x;
        for(auto x : a) {
            if(check(x)) {
                cout << x << " ";
            }
        }
        cout << endl;
    }
    return 0;
}