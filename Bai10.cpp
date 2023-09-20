#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s; cin >> s;
        int vt = s.find("084");
        for(int i = 0; i < s.length(); i++) {
            if(i >= vt && i <= vt + 2) {
                continue;
            } else {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}