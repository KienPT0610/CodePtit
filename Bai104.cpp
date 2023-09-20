#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

int nto(int n) {
    if(n < 2) return 1;
    if(n < 4) return n;
    if(n % 2 == 0) return 2;
    if(n % 3 == 0) return 3;
    for(int i = 5; i <= sqrt(n); i++) {
        if(n % i == 0) return i;
        if(n % (i + 2) == 0) return i + 2;
    }
    return n;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n; cin >> n;
        for(int i = 1; i <= n; i++) {
            cout << nto(i) << " ";
        }
        cout << endl;
    }
    return 0;
}