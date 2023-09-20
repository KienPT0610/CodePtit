#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--) {
        ll a, b; cin >> a >> b;
        ll uc = __gcd(a, b);
        cout << a * b / uc << " " << uc << endl; 
    }
    return 0;
}