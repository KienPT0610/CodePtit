#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

int main() {
    int t; cin >> t;
    while(t--) {
        db a, b, c, d;
        cin >> a >> b >> c >> d;
        db kq = sqrt(pow(a - c, 2) + pow(b - d, 2));
        cout << fixed << setprecision(4) << kq << endl;
    }
    return 0;
}