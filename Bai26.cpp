#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int a[10004] = {};
        int l = 0;
        for(int i = 2; i <= sqrt(n); i++) {
            while(n % i == 0) {
                a[l++] = i;
                n /= i;
            }
        }
        if(n > 1) a[l++] = n;
        if(l < k) {
            cout << "-1" << endl;
            continue;
        }    
        cout << a[k - 1] << endl;
    }
    
    return 0;
}