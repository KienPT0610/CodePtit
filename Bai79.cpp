#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int t; cin >> t;
    while(t--)	{
        int n, k; cin >> n >> k;
        int a[n] = {};
        for(int &x : a) cin >> x;
        sort(a, a + n, cmp);
        for(int i = 0; i < k; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}