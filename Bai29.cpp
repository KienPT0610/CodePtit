#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

ll fb[94] = {};
void fibo() {
    fb[0] = 0;
    fb[1] = 1;
    for(int i = 2; i < 94; i++) {
        fb[i] = fb[i - 1] + fb[i - 2];
    }
}

int main() {
    fibo();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << fb[n] << endl;
    }
    return 0;
}