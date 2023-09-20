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
        int n; cin >> n;
        ll a[n] = {};
        for(auto &x : a) cin >> x;
        vector <ll> vt;
        for(int i = 0; i < n - 1; i++) {
            if(a[i] != 0) {
                if(a[i] == a[i + 1]) {
                    a[i] *= 2;
                    a[i + 1] = 0;
                    vt.push_back(a[i]);
                }
                else {
                    vt.push_back(a[i]);
                }
            }
        }
        if(a[n - 1] != 0) vt.push_back(a[n - 1]);
        for(int i = 0; i < vt.size(); i++) {
            cout << vt[i] << " ";
        }
        for(int i = vt.size(); i < n; i++) {
            cout << "0" << " ";
        }
        cout << endl;
    }
    return 0;
}