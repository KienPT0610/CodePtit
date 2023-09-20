#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;
// CODE OF KIEN PT //


int main() {
    int t; cin >> t;
    while(t--)	{
        int n; cin >> n;
        set <int> st;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        if(st.size() < 2) {
            cout << "-1" << endl;
            continue;
        } else {
            std::set<int>::iterator it = st.begin(); 
            std::advance(it, 1);
            cout << *st.begin() << " " << *it << endl; 
        }
    }
    return 0;
}