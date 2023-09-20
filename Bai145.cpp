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
        string s; cin >> s;
        multiset <char> st;
        int sum = 0;
        for(int i = 0; i < s.length(); i++) {
            if(isdigit(s[i])) {
                sum += s[i] - '0';
            } else {
                st.insert(s[i]);
            }
        }
        for(auto x : st) cout << x;
        cout << sum << endl; 
    }
    return 0;
}