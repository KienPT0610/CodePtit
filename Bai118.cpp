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
        for(auto &x : a) cin >> x;
        int l, r; cin >> l >> r;
        string s = "";
        for(int i = l + 1; i <= r; i++) {
            if(a[i] > a[i - 1]) {
                s += "1";
            }
            else {
                s += "0";
            }
        }
        if(s.find("01") != -1) {
            cout << "No" << endl;
        }else  {
            cout << "Yes" << endl;
        }
    }
    return 0;
}