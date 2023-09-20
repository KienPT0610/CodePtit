#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //

string ChuanHoa(string s) {
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    return s;
}

string ChuanHoaTen(string s) {
    for(int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
    return s;
}
int main() {
    string s; getline(cin, s);
    vector <string> vt;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp) {
        tmp = ChuanHoa(tmp);
        vt.push_back(tmp);
    }
    for(int i = 0; i < vt.size() - 1; i++) {
        cout << vt[i];
        if(i == vt.size() - 2) cout << ", ";
        else cout << " ";
    }
    vt[vt.size() - 1] = ChuanHoaTen(vt[vt.size() - 1]);
    cout << vt[vt.size() - 1];
    return 0;
}