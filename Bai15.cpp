#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

string Sum(string s) {
    int sum = 0;
    for(int i = 0; i < s.length(); i++) {
        sum += s[i] - '0';
    }
    s = to_string(sum);
    return s; 
}

int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s; cin >> s;
        while(s.length() != 1) {
            s = Sum(s);
        }
        cout << s << endl;
    }
    return 0;
}