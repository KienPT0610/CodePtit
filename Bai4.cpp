#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    db n; cin >> n;
    db sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    cout << fixed << setprecision(4) << sum << endl;
    return 0;
}