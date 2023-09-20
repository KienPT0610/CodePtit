#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

bool nto(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if(nto(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}