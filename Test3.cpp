#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, tmp; getline(cin, s);
    stringstream ss(s);
    vector <string> vt;
    while(ss >> tmp) {
        transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
        vt.push_back(tmp);
    }
    cout << vt[vt.size() - 1];
    for(int i = 0; i < vt.size() - 1; i++) {
        cout << vt[i][0];
    }
    cout << "@ptit.edu.vn";
    cout << endl;

    return 0;
}