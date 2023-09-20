#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

bool check(int n) {
    int c = 0, l = 0;
    while(n != 0) {
        int k = n % 10;
        if(k % 2 == 0) c++;
        else l++;
        n /= 10;
    }
    if(c == l) return true;
    return false;
}

int main() {
    int n; cin >> n;
    int l = pow(10, n - 1);
    int r = pow(10, n) - 1;
    int cnt = 0;
    for(int i = l; i <= r; i++) {
        if(check(i)) {
            cout << i << " ";
            cnt ++;
        }
        if(cnt % 10 == 0) cout << endl;
    }
    return 0;
}