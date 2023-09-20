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
        string s; cin >> s;
        s += "a";
        string ans = "0";
        vector <ll> vt;
        for(int i = 0; i < s.length(); i++) {
            if(isdigit(s[i])) {
                ans += s[i];
            }
            else {
                vt.push_back(stoi(ans));
                ans = "0";
            }
        }
        ll sum = 0;
        for(auto x : vt) {
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}