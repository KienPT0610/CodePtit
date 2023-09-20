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
        int a[n] = {};
        vector <int> vt;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            vt.push_back(a[i]);
        }
        sort(vt.begin(), vt.end());
        for(int i = 0; i < n; i++) {
            auto vtri = upper_bound(vt.begin(), vt.end(), a[i]);
            if(vtri != vt.end()) {
                cout << *vtri << " ";
            } else {
                cout << "_" << " ";
            }
        }
        cout << endl;
    }
    return 0;
}