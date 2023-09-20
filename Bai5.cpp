#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    ll n; cin >> n;
    ll gt = 0;
    ll res = 1;
    for(int i = 1; i <= n; i++) {
        res *= i;
        gt += res;
    }
    cout << gt << endl;
    return 0;
}