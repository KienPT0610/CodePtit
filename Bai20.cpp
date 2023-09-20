#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
#define lmt 1000006
using namespace std;
// CODE OF KIEN PT //

int a[lmt + 1] = {};

void erathone() {
    a[0] = 1;
    a[1] = 1;
    for(int i = 2; i <= sqrt(lmt); i++) {
        if(a[i] == 0) {
            for(int j = i * i; j <= lmt; j += i) {
                a[j] = 1;
            }
        }
    }
}

int main() {
    int l, r; cin >> l >> r;
    if(l > r) {
        int tmp = l; l = r; r = tmp;
    }
    erathone();
    for(int i = l; i <= r; i++) {
        if(a[i] == 0) cout << i << " ";
    }
    return 0;
} 