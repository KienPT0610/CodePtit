#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        multiset <int> st;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        std::set<int>::iterator it = st.begin();
        std::advance(it, k - 1);
        cout << *it << endl;
    }
    return 0;
}