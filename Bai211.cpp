#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    ifstream file;
    file.open("VANBAN.in");
    string s;
    set <string> st;
    while(file >> s) {
        for(int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
        st.insert(s);
    }
    for(auto x : st) {
        cout << x << endl;
    }
    return 0;
}