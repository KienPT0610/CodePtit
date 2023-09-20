#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int m, s; cin >> m >> s;
    int a[m] = {};
    int b[m] = {};
    if(s == 0 && m == 1) {
        cout << 0 << " " << 0 << endl;
        return 0;
    }
    if(9 * m < s || s == 0) {
        cout << -1 << " " << -1 << endl;
        return 0;
    }
    int ss = s;
    a[0] = 1;
    s--;
    for(int i = m - 1; i >= 0; i--) {
        if(s >= 9) {
            a[i] += 9;
            s -= 9;
        } else {
            a[i] += s;
            s = 0;
        }
    }

    for(int i = 0; i < m; i++) {
        if(ss >= 9) {
            b[i] += 9;
            ss -= 9;
        } else {
            b[i] += ss;
            ss = 0;
        }
    }

    for(int i = 0; i < m; i++) cout << a[i];
    cout << " ";
    for(int i = 0; i < m; i++) cout << b[i];
    return 0;
}