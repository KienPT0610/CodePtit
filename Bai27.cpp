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
        int r = sqrt(n);
        for(int i = 2; i <= r; i++) {
            if(nto(i)) {
                cout << i*i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}