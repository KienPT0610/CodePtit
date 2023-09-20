#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

bool cmp(string a, string b) {
    if(a.length() != b.length()) return a.length() > b.length();
    return a > b;

}

bool TN(string s) {
    if(s.length() == 1) return 0;
    int l = 0, r = s.length() - 1;
    while(l <= r) {
        if(s[l] != s[r]) return 0;
        l++; r--;
    }
    return 1;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector <string> vt;
    string s;
    map <string, int> mp;
    while(cin >> s) {
        vt.push_back(s);
        mp[s] ++;
    }
    sort(vt.begin(), vt.end(), cmp);
    for(auto x : vt) {
        if(TN(x) && mp[x] != 0) {
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
    return 0;
}