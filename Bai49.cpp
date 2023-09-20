#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp;
        int cnt = 0;
        while(ss >> tmp) {
            cnt ++;
        }
        cout << cnt << endl;
    }
    return 0;
}