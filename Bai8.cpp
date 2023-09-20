#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

string a = "A B B A D C C A B D C C A B D";
string b = "A C C A B C D D B B C D D B B";

int check(string s, string x) {
    int cnt = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == x[i] && s[i] != ' ') {
            cnt ++;
        }
    }
    return cnt;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cin.ignore();
        string s; 
        getline(cin, s);
        int cnt = 0;
        if(n == 101) {
            cnt = check(s, a);
        }
        if(n == 102) {
            cnt = check(s, b);
        }
        cout << fixed << setprecision(2) << cnt * 10.0 / 15 << endl;
    }
    return 0;
}