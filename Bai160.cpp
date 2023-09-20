#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

bool cmp(int a, int b) {
    string x = to_string(a);
    string y = to_string(b);
    return x + y > y + x;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n; cin >> n;
        int a[n] = {};
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n, cmp);
        for(auto x : a) cout << x;
        cout << endl;
    }
    return 0;
}