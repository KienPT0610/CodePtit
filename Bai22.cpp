#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

int nto(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return 0;
    }
    return n > 1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int lc = 0;
        for(int i = 2; i <= n / 2; i++) {
            if(nto(i)) {
                if(nto(n - i)) {
                    lc = 1;
                    cout << i << " " << n - i << endl;
                    break;
                }
            } 
        }
        if(!lc) cout << "-1" << endl;
    }
    return 0;
}