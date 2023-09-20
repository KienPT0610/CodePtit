#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    string s; cin >> s;
    for(int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y') {
            cout << "." << s[i];
        }
    }
    cout << endl;

    return 0;
}