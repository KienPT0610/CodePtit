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
        string s; int k;
        cin >> s >> k;
        set <char> st;
        int cnt = 0;
        for(int j = 0; j < s.length(); j++) {
            for(int i = j; i < s.length(); i++) {
                st.insert(s[i]);
                if(st.size() > k) {
                    break;
                }
                if(st.size() == k) {
                    cnt++;
                } 
            }
            st.clear();
        }
        cout << cnt << endl; 
    }
    return 0;
}