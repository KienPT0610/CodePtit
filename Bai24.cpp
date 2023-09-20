#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll s = 0;
        for(int i = 2; i <= sqrt(n); i++) {
            while(n % i == 0) {
                s  = i;
                n /= i;
            }
        }
        if(n > 1) s = n;
        cout << s << endl; 
    }
    return 0;
}