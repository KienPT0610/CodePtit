#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    string s; getline(cin, s);
    string c; cin >> c;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp) {
        if(tmp != c) {
            cout << tmp << " ";
        }
    }
    cout << endl;
    return 0;
}