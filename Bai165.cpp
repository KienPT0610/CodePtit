#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

bool check(vector<ll> a, ll i, ll x) {
    int l = 0, r = i - 1;
    while(l <= r) {
        if(a[l] + a[r] == x) return true;
        if(a[l] + a[r] < x) {
            l++;
        }
        else {
            r--;
        }
    }
    return false;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n; cin >> n;
        vector <ll> vt;
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            vt.push_back(x * x); 
        }
        sort(vt.begin(), vt.end());
        int cc = 0;
        for(int i = vt.size(); i >= 2; i--) {
            if(check(vt, i, vt[i])) {
                cc = 1;
                break;
            }
        }
        if(cc) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}