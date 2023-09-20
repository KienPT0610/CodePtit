#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

ll fb[94] = {};
void fibo() {
    fb[0] = 0; fb[1] = 1;
    for(int i = 2; i < 94; i++) {
        fb[i] = fb[i - 1] + fb[i - 2];
    }
}

bool check(ll n) {
    for(int i = 0; i < 94; i++) {
        if(n == fb[i]) return true;
    }
    return false;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    fibo();
    while(t--)	{
        int n; cin >> n;
        int a[n] = {};
        for(auto &x : a) cin >> x; 
        for(int i = 0; i < n; i++) {
            if(check(a[i])) cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}