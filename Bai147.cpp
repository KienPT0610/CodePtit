#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

string ChuanHoa(string s) {
    string tmp = "";
    for(int i = 0; i < s.length(); i++) {
        tmp += tolower(s[i]);
    }
    return tmp;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    map <string, int> mp;
    cin.ignore();
    while(t--)	{
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp;
        vector <string> vt;
        while(ss >> tmp) {
            vt.push_back(ChuanHoa(tmp));
        }
        s = "";
        s += vt[vt.size() - 1];
        for(int i = 0; i < vt.size() - 1; i++) {
            s += vt[i][0];
        }
        mp[s]++;
        if(mp[s] == 1) {
            cout << s;
        } else {
            cout << s << mp[s];
        }
        cout << "@ptit.edu.vn" << endl;
    }
    return 0;
}