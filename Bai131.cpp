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
    cin.ignore();
    while(t--)	{
        string s1; getline(cin, s1);
        string s2; getline(cin, s2);
        stringstream ss2(s2);
        string token2;
        set <string> st2;
        while(ss2 >> token2) {
            st2.insert(token2);
        }
        stringstream ss1(s1);
        string token1;
        set <string> st1;
        while(ss1 >> token1) {
            if(st2.find(token1) == st2.end()) {
                st1.insert(token1);
            }
        }
        for(auto x : st1) cout << x << " ";
        cout << endl;
    }
    return 0;
}