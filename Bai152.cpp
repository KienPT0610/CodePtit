#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--)	{
        int n, m; cin >> n >> m;
        set <int> st;
        set <int> st2;
        for(int i = 0; i < n + m; i++) {
            int x; cin >> x;
            if(i >= n) {
                if(st.find(x) != st.end()) {
                    st2.insert(x);
                }
            }
            st.insert(x);
        }
        for(auto x : st) cout << x << " ";
        cout << endl;
        for(auto x : st2) cout << x << " ";
        cout << endl;
    }
    return 0;
}