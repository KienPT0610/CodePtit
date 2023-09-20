#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        char c; cin >> c;
        if(c >= 'A' && c <= 'Z') {
            c = tolower(c);
        } else {
            c = toupper(c);
        }
        cout << c << endl;
    }
    return 0;
}