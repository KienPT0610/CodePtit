#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int n; cin >> n;
    set <string> st;
    cin.ignore();
    while(n--) {
        string s; getline(cin, s);
        st.insert(s);
    }
    cout << st.size() << endl;
    return 0;
}