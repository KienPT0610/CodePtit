#include <bits/stdc++.h>
typedef long long ll;
typedef double db;
#define lmt 100005
using namespace std;
// CODE OF KIEN PT //

int a[lmt + 1] = {};

void era() {
    a[0] = 1; a[1] = 1;
    for(int i = 2; i <= sqrt(lmt); i++) {
        if(a[i] == 0) {
            for(int j = i*i; j <= lmt; j += i) {
                a[j] = 1;
            }
        }
    }
}
int main() {
    era();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i = 2; i <= n; i++) {
            if(a[i] == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}