#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--)	{
        int k, n; cin >> k >> n;
        int max = k * n;
        multiset <int> st;
        for(int i = 0; i < max; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        for(auto x : st) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}