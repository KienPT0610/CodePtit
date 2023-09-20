#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

bool checkBang(string s) {
    // check 3 so dau
    for(int i = 1; i < 3; i++) {
        if(s[i] != s[i - 1]) return false;
    }
    if(s[3] != s[4]) return false;
    return true;
}

bool checkLocPhat(string s) {
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '6' && s[i] != '8') return false;
    }
    return true;
}

bool checkTang(string s) {
    for(int i = 1; i < s.length(); i++) {
        if(s[i] <= s[i - 1]) return false;
    }
    return true;
}


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    cin.ignore();
    while(t--)	{
        string s; getline(cin, s);
        s.erase(8, 1);
        string kt = s.substr(5, 5);
        if(checkBang(kt) || checkLocPhat(kt) || checkTang(kt)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}