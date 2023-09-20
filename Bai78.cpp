#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--)	{
        int n; cin >> n;
        int a[n] = {};
        for(auto &x : a) cin >> x;
        int sum = INT_MAX;
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(abs(sum) > abs(a[i] + a[j])) {
                    sum = a[i] + a[j];
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}