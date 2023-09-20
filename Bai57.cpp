#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    string s; getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    vector <string> vt;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp) {
        vt.push_back(tmp);
    }
    cout << vt[vt.size() - 1];
    for(int i = 0; i < vt.size() - 1; i++) {
        cout << vt[i][0];
    } 
    cout << "@ptit.edu.vn" << endl;
    return 0;
}