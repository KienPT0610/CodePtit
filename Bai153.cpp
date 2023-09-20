#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n, x; cin >> n >> x;
        multimap <int, int> mp;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            mp.insert({abs(a - x), a});
        }
        for(auto x : mp) {
            cout << x.second << " ";
        }
        cout << endl;
    }
    return 0;
}