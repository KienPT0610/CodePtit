#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

string ChuanHoa(string s) {
    string tmp = "";
    for(int i = 0; i < s.length(); i++) {
        tmp += toupper(s[i]);
    }
    return tmp;
}

map <int, int> mp;
void nhap() {
    int key = 2;
    for(int i = 65; i <= 79; i += 3) {
        mp[i] = mp[i + 1] = mp[i + 2] = key;
        key++;
    }
    mp[80] = mp[81] = mp[82] = mp[83] = 7;
    mp[84] = mp[85] = mp[86] = 8;
    mp[87] = mp[88] = mp[89] = mp[90] = 9;
}

bool check(string s) {
    int l = 0, r = s.length() - 1;
    while(l <= r) {
        if(s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    nhap();
    while(t--)	{
        string s; cin >> s;
        s = ChuanHoa(s);
        string tmp = "";
        for(int i = 0; i < s.length(); i++) {
            tmp += to_string(mp[s[i]]);
        }
        if(check(tmp)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}