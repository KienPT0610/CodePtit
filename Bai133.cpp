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
        map <char, int> mp;
        for(int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        vector <int> vt;
        for(auto i : mp) {
            vt.push_back(i.second);
        }
        sort(vt.begin(), vt.end(), greater<int>());
        if(vt[0] - 1 <= s.size() - vt[0]) {
            cout << "1" << endl;
        } else cout << "0" << endl;
    }
    return 0;
}