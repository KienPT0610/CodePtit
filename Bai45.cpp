#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int n; cin >> n;
    set <int> st;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        st.insert(x);
    }

    for(std::set<int>::iterator it = st.begin(); it != st.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}   