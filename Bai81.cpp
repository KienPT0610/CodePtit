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
        int n; cin >> n;
        set <int> st;
        int lc = 0;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if(st.find(x) != st.end() && lc == 0) {
                lc = x;
            } else {
                st.insert(x);
            }
        }
        if(!lc) {
            cout << "-1" << endl;
        } else {
            cout << lc << endl;
        }
    }
    return 0;
}